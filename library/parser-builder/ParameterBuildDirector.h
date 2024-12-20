#pragma once
#include "ParserParameterBuilder.h"

class ParameterBuildDirector {
private:
    ParserParameterBuilder& parameterBuilder;
public:
    explicit ParameterBuildDirector(ParserParameterBuilder *parameterBuilder)
        : parameterBuilder(*parameterBuilder)
    {};

    ParserParameterBuilder& buildNecessary(std::string flag, std::regex validator = std::regex("."))  {
        parameterBuilder.addFlag(std::move(flag));
        parameterBuilder.setNecessary(true);
        parameterBuilder.setValidator(std::move(validator));

        return parameterBuilder;
    };

    ParserParameterBuilder& buildUnnecessary(std::string flag, std::regex validator = std::regex(".")) {
        parameterBuilder.addFlag(std::move(flag));
        parameterBuilder.setNecessary(false);
        parameterBuilder.setValidator(std::move(validator));

        return parameterBuilder;
    };

    void reset() const {
        parameterBuilder.reset();
    };
};
