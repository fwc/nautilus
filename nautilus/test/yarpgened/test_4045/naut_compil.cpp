/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4045
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4045
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
void test(val<unsigned int> var_0, val<unsigned short> var_1, val<short> var_2, val<unsigned char> var_3, val<signed char> var_4, val<unsigned short> var_5, val<unsigned char> var_6, val<unsigned long long int> var_7, val<unsigned short> var_8, val<long long int> var_9, val<bool> var_10, val<bool> var_11, val<int> zero, val<unsigned int*> var_12, val<unsigned long long int*> var_13, val<long long int*> var_14, val<unsigned char*> var_15, val<unsigned char*> var_16, val<unsigned short*> var_17, val<unsigned short*> var_18) {
    *var_12 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) ((-1539533060) | (((/* implicit */val<int>) var_4))))) ? (max((1539533070), (-1539533082))) : (((/* implicit */val<int>) var_1)))) | (((/* implicit */val<int>) var_2))));
    if (((/* implicit */val<bool>) var_3))
    {
        *var_13 &= ((/* implicit */val<unsigned long long int>) var_1);
        *var_14 = ((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) var_8)) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_4)))) : (((var_10) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_8)))))), (((/* implicit */val<int>) var_6))));
        *var_15 = ((/* implicit */val<unsigned char>) var_0);
        *var_16 = ((/* implicit */val<unsigned char>) min((*var_16), (((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) (~(var_9))))), (max((((/* implicit */val<unsigned long long int>) ((val<unsigned short>) -1264073127))), (((((/* implicit */val<bool>) var_7)) ? (var_7) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))))))))))));
    }
    else
    {
        *var_17 -= ((/* implicit */val<unsigned short>) min((((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_11))))) ? (var_7) : (((/* implicit */val<unsigned long long int>) (+(var_0)))))), (((/* implicit */val<unsigned long long int>) 1539533089))));
        *var_18 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) (((+(((/* implicit */val<int>) var_4)))) & (((((/* implicit */val<bool>) 1539533067)) ? (-1539533071) : (-32694001))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3654993985U;
unsigned short var_1 = (unsigned short)29436;
short var_2 = (short)-16907;
unsigned char var_3 = (unsigned char)248;
signed char var_4 = (signed char)-112;
unsigned short var_5 = (unsigned short)30567;
unsigned char var_6 = (unsigned char)27;
unsigned long long int var_7 = 11896598864714332660ULL;
unsigned short var_8 = (unsigned short)24222;
long long int var_9 = -5549291385421232798LL;
bool var_10 = (bool)0;
bool var_11 = (bool)1;
int zero = 0;
unsigned int var_12 = 1594959588U;
unsigned long long int var_13 = 11629111385239289365ULL;
long long int var_14 = -8853273558375463552LL;
unsigned char var_15 = (unsigned char)201;
unsigned char var_16 = (unsigned char)58;
unsigned short var_17 = (unsigned short)8001;
unsigned short var_18 = (unsigned short)34009;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 4294966783U;
    value_mismatch |= var_13 != 29204ULL;
    value_mismatch |= var_14 != 27LL;
    value_mismatch |= var_15 != (unsigned char)65;
    value_mismatch |= var_16 != (unsigned char)58;
    value_mismatch |= var_17 != (unsigned short)8001;
    value_mismatch |= var_18 != (unsigned short)34009;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
