#pragma once
#include "ScriptLib.hpp"
//
// Created by vastrakai on 9/23/2024.
//


class FSLib : public ScriptLib {
public:
    void initialize(lua_State* L) override;
};