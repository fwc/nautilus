/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7869
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7869
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
void test(val<long long int> var_1, val<long long int> var_3, val<unsigned short> var_9, val<unsigned char> var_15, val<short> var_16, val<int> zero, val<unsigned char*> var_18, val<long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) >= (((((/* implicit */val<bool>) var_1)) ? (var_3) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_16)))))));
    *var_19 &= ((/* implicit */val<long long int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2406178813129793543LL;
long long int var_3 = 3203303533808946821LL;
unsigned short var_9 = (unsigned short)39913;
unsigned char var_15 = (unsigned char)207;
short var_16 = (short)-25937;
int zero = 0;
unsigned char var_18 = (unsigned char)171;
long long int var_19 = -7137195985271734197LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != 75LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_9, var_15, var_16, zero, &var_18, &var_19);
  checksum();
}
