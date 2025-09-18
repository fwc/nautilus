/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9653
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9653
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
void test(val<unsigned long long int> var_0, val<long long int> var_3, val<bool> var_7, val<unsigned char> var_9, val<short> var_11, val<unsigned int> var_15, val<signed char> var_17, val<unsigned char> var_18, val<int> zero, val<unsigned char*> var_19, val<int*> var_20, val<unsigned char*> var_21) {
    *var_19 += ((/* implicit */val<unsigned char>) ((min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) 3676340187U)) : (var_3)))), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) & (var_0))))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((var_15) ^ (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_18))))))))))));
    *var_20 = ((/* implicit */val<int>) var_7);
    *var_21 ^= ((/* implicit */val<unsigned char>) (((((-(4294967295U))) < (max((0U), (((/* implicit */val<unsigned int>) (val<signed char>)-104)))))) ? (((/* implicit */val<long long int>) (-((+(((/* implicit */val<int>) var_17))))))) : (5392297523390610660LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4820279260366690409ULL;
long long int var_3 = -5022073936452380074LL;
bool var_7 = (bool)1;
unsigned char var_9 = (unsigned char)151;
short var_11 = (short)32113;
unsigned int var_15 = 2468766385U;
signed char var_17 = (signed char)-115;
unsigned char var_18 = (unsigned char)34;
int zero = 0;
unsigned char var_19 = (unsigned char)117;
int var_20 = 953192596;
unsigned char var_21 = (unsigned char)197;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)118;
    value_mismatch |= var_20 != 1;
    value_mismatch |= var_21 != (unsigned char)182;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_9, var_11, var_15, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}
