#pragma once
/*

THIS FILE IS TO ONLY HAVE DEFINE STATEMENTS.
Later we can make this dynamic or something else fancy.

*/

// Redis Settings
#define RD_HOST localhost
#define RD_AUTH LetsMakeSomeAntsDoWorkForUs

// Postgres Settings
#define PG_HOST localhost
#define PG_PORT 5432
#define PG_DB acs44
#define PG_USER acs44user
#define PG_PASS LetsMakeSomeAntsDoWorkForUs

// Environment Settings
#define ENV_SIDE 256
#define ENV_SIZE (ENV_SIDE * ENV_SIDE)

// Simulation Settings
#define SIM_DURATION 256 * 256

#define START_ANT_FOOD 1000
#define MAX_ANT_FOOD 50000