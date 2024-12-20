#pragma once

#include "ParserCommandBuilder.h"

template <typename T>
class CommandBuildDirector {
private:
    ParserCommandBuilder<T> &commandBuilder;
public:
    explicit CommandBuildDirector(ParserCommandBuilder<T> *commandBuilder)
        : commandBuilder(*commandBuilder)
    {}

    ParserCommandBuilder<T>& buildBasicCommand(ParseCallback<T> function, std::string description) const {
        commandBuilder.setDescription(std::move(description));
        commandBuilder.setCallback(std::move(function));

        return commandBuilder;
    };

    void reset() const {
        commandBuilder.reset();
    }
};
