/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7130
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7130
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
void test(val<bool> var_1, val<unsigned short> var_2, val<signed char> var_3, val<unsigned char> var_9, val<unsigned char> var_10, val<unsigned long long int> var_11, val<unsigned char> var_15, val<long long int> var_18, val<int> zero, val<short*> var_19, val<bool*> var_20) {
    *var_19 = ((/* implicit */val<short>) max((*var_19), (((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)25280)) ? (((((/* implicit */val<bool>) 0ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (18446744073709551615ULL))) : (((/* implicit */val<unsigned long long int>) 525825464))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) ((val<bool>) (val<bool>)0))) == (((/* implicit */val<int>) var_15)))))) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned short>)65535)))) | (((((/* implicit */val<bool>) 3ULL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) : (var_18))))))))));
    *var_20 |= ((/* implicit */val<bool>) min((min((((var_1) ? (0ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))))), (var_11))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_2))))) ? (var_11) : (((/* implicit */val<unsigned long long int>) var_18))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned short var_2 = (unsigned short)11000;
signed char var_3 = (signed char)127;
unsigned char var_9 = (unsigned char)206;
unsigned char var_10 = (unsigned char)154;
unsigned long long int var_11 = 3349565481204535819ULL;
unsigned char var_15 = (unsigned char)107;
long long int var_18 = 5049931832373000620LL;
int zero = 0;
short var_19 = (short)608;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)608;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_9, var_10, var_11, var_15, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
