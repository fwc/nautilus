/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8505
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8505
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
void test(val<unsigned long long int> var_1, val<bool> var_3, val<unsigned char> var_5, val<bool> var_9, val<unsigned long long int> var_12, val<int> zero, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((((/* implicit */val<bool>) (((~(((/* implicit */val<int>) (val<unsigned char>)140)))) ^ (((/* implicit */val<int>) var_9))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)32768))) : (var_1));
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_3) || ((val<bool>)1))))) > ((~(((((/* implicit */val<bool>) var_5)) ? (var_12) : (var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1468286850136664485ULL;
bool var_3 = (bool)1;
unsigned char var_5 = (unsigned char)132;
bool var_9 = (bool)0;
unsigned long long int var_12 = 15149873426351966594ULL;
int zero = 0;
unsigned long long int var_18 = 13045181691904917091ULL;
unsigned long long int var_19 = 10018173883744041045ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 32768ULL;
    value_mismatch |= var_19 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_9, var_12, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
