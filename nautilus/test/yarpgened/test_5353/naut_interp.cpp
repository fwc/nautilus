/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5353
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5353
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
void test(val<int> var_1, val<signed char> var_2, val<long long int> var_3, val<signed char> var_4, val<int> var_6, val<unsigned short> var_9, val<short> var_11, val<int> var_12, val<unsigned short> var_14, val<long long int> var_17, val<int> zero, val<signed char*> var_18, val<unsigned short*> var_19, val<unsigned char*> var_20, val<long long int*> var_21, val<int*> var_22) {
    if (((/* implicit */val<bool>) var_3))
    {
        *var_18 &= ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) ((val<unsigned short>) min((var_12), (var_1))))), (((((val<unsigned long long int>) var_2)) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2))))))))));
        *var_19 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned char>) ((val<signed char>) min((((/* implicit */val<unsigned short>) var_11)), (var_14))))), (((val<unsigned char>) max((var_9), (((/* implicit */val<unsigned short>) var_4)))))));
    }

    *var_20 += ((/* implicit */val<unsigned char>) max((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_11)) ^ (((/* implicit */val<int>) (val<unsigned short>)36441))))), (max(((~(var_17))), (((/* implicit */val<long long int>) var_6))))));
    *var_21 = (-(var_17));
    *var_22 |= ((/* implicit */val<int>) (val<unsigned short>)29095);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -962362480;
signed char var_2 = (signed char)12;
long long int var_3 = -1322076812418913417LL;
signed char var_4 = (signed char)36;
int var_6 = -424634006;
unsigned short var_9 = (unsigned short)27777;
short var_11 = (short)-30884;
int var_12 = 703316295;
unsigned short var_14 = (unsigned short)63555;
long long int var_17 = 7965396643362401776LL;
int zero = 0;
signed char var_18 = (signed char)98;
unsigned short var_19 = (unsigned short)31786;
unsigned char var_20 = (unsigned char)225;
long long int var_21 = -3352818223044411472LL;
int var_22 = -339362557;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (unsigned short)129;
    value_mismatch |= var_20 != (unsigned char)230;
    value_mismatch |= var_21 != -7965396643362401776LL;
    value_mismatch |= var_22 != -339346009;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_9, var_11, var_12, var_14, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
