/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6524
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6524
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned long long int> var_1, val<int> var_2, val<int> var_4, val<unsigned long long int> var_5, val<unsigned int> var_6, val<short> var_7, val<short> var_10, val<int> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned char*> var_15, val<int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) max((*var_14), (((/* implicit */val<unsigned char>) var_6))));
    *var_15 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_7)), (var_13)))) ? (var_4) : (var_2))) ^ (((((/* implicit */val<int>) var_10)) - (((/* implicit */val<int>) ((val<unsigned short>) var_1)))))));
    *var_16 ^= ((/* implicit */val<int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11545292441110476531ULL;
int var_2 = 1888283028;
int var_4 = 167065463;
unsigned long long int var_5 = 1308154487275234322ULL;
unsigned int var_6 = 1322668396U;
short var_7 = (short)-16032;
short var_10 = (short)17866;
int var_13 = -1287884087;
int zero = 0;
unsigned char var_14 = (unsigned char)168;
unsigned char var_15 = (unsigned char)188;
int var_16 = 1194338630;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)168;
    value_mismatch |= var_15 != (unsigned char)160;
    value_mismatch |= var_16 != 40865108;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_7, var_10, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
