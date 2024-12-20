#include "SerializerSimplifyObjects.h"


json SerializerSimplifyObjects::serialize(const GameStateDTO &object) {
    json j;
    j["fieldSize"] = object.fieldSize;
    j["roundNumber"] = object.roundNumber;
    j["shipsSizes"] = shipsSizesToJson(object.shipsSizes);
    return j;
}

void SerializerSimplifyObjects::deserialize(const json &j, GameStateDTO &object) {
    object.fieldSize = j["fieldSize"];
    object.roundNumber = j["roundNumber"];
    object.shipsSizes = shipSizesFromJson(j);
}