/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8213
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8213
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
void test(val<short> var_0, val<unsigned int> var_1, val<unsigned int> var_3, val<long long int> var_4, val<int> var_5, val<unsigned int> var_6, val<bool> var_7, val<unsigned int> var_9, val<unsigned long long int> var_10, val<unsigned long long int> var_11, val<long long int> var_12, val<unsigned int> var_13, val<int> zero, val<unsigned short*> var_15, val<unsigned char*> var_16, val<long long int*> var_17) {
    if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) min((((/* implicit */val<short>) var_7)), (((val<short>) (val<unsigned short>)10))))))))
    {
        *var_15 = ((/* implicit */val<unsigned short>) (-(max((max((((/* implicit */val<unsigned long long int>) (val<short>)1325)), (var_10))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) : (var_4))))))));
        *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (+(var_6)))) ? (((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (var_11))) + (((/* implicit */val<unsigned long long int>) var_1)))) : (((val<unsigned long long int>) max((((/* implicit */val<long long int>) var_13)), (var_12))))));
    }

    *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (+(var_5)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)10)))))) : (var_9)))) && (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) max((var_5), (((/* implicit */val<int>) (val<unsigned short>)65526))))), (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)9))) ^ (var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22402;
unsigned int var_1 = 3665258151U;
unsigned int var_3 = 3538762579U;
long long int var_4 = -7383183772958264854LL;
int var_5 = 1784920217;
unsigned int var_6 = 744457388U;
bool var_7 = (bool)1;
unsigned int var_9 = 3637405777U;
unsigned long long int var_10 = 2540496604942148547ULL;
unsigned long long int var_11 = 646272538050327888ULL;
long long int var_12 = 4984295939111987469LL;
unsigned int var_13 = 2858954954U;
int zero = 0;
unsigned short var_15 = (unsigned short)25521;
unsigned char var_16 = (unsigned char)99;
long long int var_17 = -8269069990225302446LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)22402;
    value_mismatch |= var_16 != (unsigned char)168;
    value_mismatch |= var_17 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_11, var_12, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
