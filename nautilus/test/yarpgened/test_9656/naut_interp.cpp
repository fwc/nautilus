/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9656
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9656
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_1, val<unsigned char> var_3, val<long long int> var_6, val<unsigned int> var_7, val<signed char> var_8, val<unsigned char> var_9, val<int> zero, val<bool*> var_10, val<unsigned short*> var_11, val<unsigned char*> var_12, val<signed char*> var_13, val<unsigned short*> var_14, val<int*> var_15, val<signed char*> var_16) {
    *var_10 = ((/* implicit */val<bool>) max((*var_10), (((/* implicit */val<bool>) var_7))));
    *var_11 = ((/* implicit */val<unsigned short>) (((-(((/* implicit */val<int>) max(((val<unsigned short>)3392), (((/* implicit */val<unsigned short>) var_3))))))) ^ (((/* implicit */val<int>) (val<signed char>)-1))));
    if (((/* implicit */val<bool>) ((((((/* implicit */val<unsigned long long int>) min((var_6), (((/* implicit */val<long long int>) var_7))))) % (max((var_0), (((/* implicit */val<unsigned long long int>) (val<signed char>)-10)))))) / (((val<unsigned long long int>) (val<signed char>)-20)))))
    {
        *var_12 = ((/* implicit */val<unsigned char>) (((-((+(((/* implicit */val<int>) var_1)))))) <= ((~(((/* implicit */val<int>) (val<short>)16416))))));
        *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) (((~(((/* implicit */val<int>) (val<unsigned short>)17)))) + (((/* implicit */val<int>) ((val<unsigned char>) var_3)))))) & (((val<long long int>) (+(((/* implicit */val<int>) var_8)))))));
        *var_14 &= ((/* implicit */val<unsigned short>) var_9);
    }
    else
    {
        *var_15 = ((/* implicit */val<int>) var_6);
        *var_16 *= ((/* implicit */val<signed char>) var_6);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10816222438211768966ULL;
unsigned short var_1 = (unsigned short)11006;
unsigned char var_3 = (unsigned char)41;
long long int var_6 = -335998868882599890LL;
unsigned int var_7 = 3272374016U;
signed char var_8 = (signed char)-13;
unsigned char var_9 = (unsigned char)157;
int zero = 0;
bool var_10 = (bool)0;
unsigned short var_11 = (unsigned short)5463;
unsigned char var_12 = (unsigned char)163;
signed char var_13 = (signed char)99;
unsigned short var_14 = (unsigned short)7640;
int var_15 = -2072933422;
signed char var_16 = (signed char)40;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (unsigned short)3391;
    value_mismatch |= var_12 != (unsigned char)163;
    value_mismatch |= var_13 != (signed char)99;
    value_mismatch |= var_14 != (unsigned short)7640;
    value_mismatch |= var_15 != 391237678;
    value_mismatch |= var_16 != (signed char)48;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
