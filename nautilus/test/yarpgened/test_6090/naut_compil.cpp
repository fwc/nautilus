/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6090
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6090
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
void test(val<unsigned int> var_4, val<signed char> var_6, val<unsigned char> var_7, val<int> var_10, val<bool> var_11, val<bool> var_14, val<int> zero, val<signed char*> var_18, val<bool*> var_19, val<short*> var_20) {
    *var_18 = ((/* implicit */val<signed char>) 9223372036854775807LL);
    *var_19 = ((/* implicit */val<bool>) max((*var_19), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)57)) ? (-9223372036854775807LL) : (((/* implicit */val<long long int>) ((((0U) >> (((((/* implicit */val<int>) (val<unsigned short>)58984)) - (58962))))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7)))))))))));
    *var_20 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned long long int>) ((var_4) << (((/* implicit */val<int>) ((var_14) || (((/* implicit */val<bool>) var_10)))))))), (min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 3974623901U)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) (val<unsigned short>)44615))))), (((var_11) ? (7379324309578061126ULL) : (((/* implicit */val<unsigned long long int>) var_4))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 953195897U;
signed char var_6 = (signed char)29;
unsigned char var_7 = (unsigned char)146;
int var_10 = -106361215;
bool var_11 = (bool)1;
bool var_14 = (bool)0;
int zero = 0;
signed char var_18 = (signed char)13;
bool var_19 = (bool)0;
short var_20 = (short)25180;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-1;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (short)29;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_7, var_10, var_11, var_14, zero, &var_18, &var_19, &var_20);
  checksum();
}
