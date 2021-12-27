#pragma once
#include "Vector.h"
#include <cstdint>

//0x3430C00 incremented->5D0
class Entity
{
public:
	int32_t Valid; //0x0000
	char pad_0004[8]; //0x0004
	char Name[12]; //0x000C
	char pad_0010[20]; //0x0010
	int32_t Team; //0x002C
	char pad_0030[972]; //0x0030
	Vec3 Position; //0x03FC
};

//0x2C3DAC88
class RefDef_t
{
public:
	int32_t ScreenX; //0x0000
	int32_t ScreenY; //0x0004
	Vec3 Fov; //0x0008
	char pad_0014[4]; //0x0014
	Vec3 ViewPos; //0x0018
}; //Size: 0x0248

//0xC22F2C
class LocalPlayerAngles
{
public:
	Vec3 Angles; //0x0000
}; //Size: 0x026C

static RefDef_t* RefDef = (RefDef_t*)0x2C3DAC88;
static LocalPlayerAngles* PlayerAngles = (LocalPlayerAngles*)0xC22F2C;