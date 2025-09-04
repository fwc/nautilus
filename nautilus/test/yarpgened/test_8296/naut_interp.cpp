/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8296
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8296
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
void test(val<unsigned long long int> var_0, val<short> var_2, val<signed char> var_3, val<long long int> var_5, val<signed char> var_6, val<unsigned char> var_7, val<unsigned long long int> var_10, val<int> zero, val<unsigned int*> var_12, val<signed char*> var_13, val<unsigned int*> var_14, val<short*> var_15, val<bool*> var_16, val<signed char*> var_17) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)62)) / (-1923248906))))
    {
        *var_12 &= ((/* implicit */val<unsigned int>) var_5);
        *var_13 = ((/* implicit */val<signed char>) min((*var_13), (((/* implicit */val<signed char>) max(((+(var_10))), (((var_0) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)195))))))))));
    }

    *var_14 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) min(((val<unsigned char>)195), (var_7))))));
    *var_15 = ((/* implicit */val<short>) var_3);
    *var_16 = ((/* implicit */val<bool>) ((val<unsigned int>) var_3));
    *var_17 = ((/* implicit */val<signed char>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) 5952388719098241854LL)) && (((/* implicit */val<bool>) var_2)))))) < ((+(var_5))))) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) min(((val<unsigned char>)250), ((val<unsigned char>)152))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9713725816883324948ULL;
short var_2 = (short)12637;
signed char var_3 = (signed char)-65;
long long int var_5 = -8106254076549477056LL;
signed char var_6 = (signed char)106;
unsigned char var_7 = (unsigned char)5;
unsigned long long int var_10 = 18161357573415411627ULL;
int zero = 0;
unsigned int var_12 = 4289612316U;
signed char var_13 = (signed char)25;
unsigned int var_14 = 2788547828U;
short var_15 = (short)16655;
bool var_16 = (bool)0;
signed char var_17 = (signed char)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 4289612316U;
    value_mismatch |= var_13 != (signed char)25;
    value_mismatch |= var_14 != 5U;
    value_mismatch |= var_15 != (short)-65;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (signed char)-104;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_7, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
