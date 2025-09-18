/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3902
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3902
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<unsigned long long int> var_7, val<int> var_10, val<short> var_11, val<bool> var_15, val<int> zero, val<unsigned long long int*> var_17, val<unsigned char*> var_18) {
    *var_17 = (-(var_7));
    *var_18 = ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) var_11)) ? (var_7) : (((/* implicit */val<unsigned long long int>) ((var_15) ? (var_10) : (((/* implicit */val<int>) var_11)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 13998481126710096011ULL;
int var_10 = -1311295115;
short var_11 = (short)-13649;
bool var_15 = (bool)0;
int zero = 0;
unsigned long long int var_17 = 4288739862663457586ULL;
unsigned char var_18 = (unsigned char)131;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4448262946999455605ULL;
    value_mismatch |= var_18 != (unsigned char)117;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_10, var_11, var_15, zero, &var_17, &var_18);
  checksum();
}
