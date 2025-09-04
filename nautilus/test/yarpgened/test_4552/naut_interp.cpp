/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4552
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4552
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
void test(val<short> var_4, val<unsigned int> var_5, val<short> var_7, val<bool> var_8, val<unsigned short> var_10, val<bool> var_11, val<unsigned short> var_12, val<int> var_14, val<int> zero, val<unsigned long long int*> var_18, val<int*> var_19, val<unsigned short*> var_20, val<unsigned int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned long long int>) ((min((((/* implicit */val<long long int>) ((var_14) ^ (((/* implicit */val<int>) var_11))))), (((-7963794369152790703LL) + (((/* implicit */val<long long int>) 1080616382U)))))) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) > (min((var_5), (((/* implicit */val<unsigned int>) (val<unsigned char>)255))))))))));
    *var_19 &= ((/* implicit */val<int>) ((((((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)50))) : (6900831981067293485ULL))) < (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) -6794583302438227629LL)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_12))))))) ? (((-2397560238102328256LL) | (((/* implicit */val<long long int>) 67108608U)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_8)))) != (((/* implicit */val<int>) var_12))))))));
    *var_20 *= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_8))) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<unsigned char>)143)), (var_10))))));
    *var_21 = ((/* implicit */val<unsigned int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)1337;
unsigned int var_5 = 357567507U;
short var_7 = (short)2061;
bool var_8 = (bool)0;
unsigned short var_10 = (unsigned short)49958;
bool var_11 = (bool)1;
unsigned short var_12 = (unsigned short)57825;
int var_14 = -1263070358;
int zero = 0;
unsigned long long int var_18 = 10141131878109556351ULL;
int var_19 = -1351943698;
unsigned short var_20 = (unsigned short)52994;
unsigned int var_21 = 2004468960U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0ULL;
    value_mismatch |= var_19 != -2090141376;
    value_mismatch |= var_20 != (unsigned short)41502;
    value_mismatch |= var_21 != 57825U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_8, var_10, var_11, var_12, var_14, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
