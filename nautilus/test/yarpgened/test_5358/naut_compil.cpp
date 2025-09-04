/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5358
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5358
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_3, val<unsigned short> var_4, val<unsigned short> var_5, val<unsigned char> var_6, val<signed char> var_7, val<signed char> var_8, val<int> zero, val<bool*> var_11, val<bool*> var_12) {
    *var_11 = ((/* implicit */val<bool>) max((*var_11), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_7)) || (((/* implicit */val<bool>) var_7)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : ((~(2970082992U)))))) ? (((/* implicit */val<int>) var_4)) : (((val<int>) ((((/* implicit */val<bool>) 2970083003U)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_0))))))))));
    *var_12 = ((/* implicit */val<bool>) (((!(((((/* implicit */val<bool>) var_4)) && (((/* implicit */val<bool>) 4545873795048006842ULL)))))) ? ((-(((/* implicit */val<int>) var_4)))) : (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) < (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : ((-9223372036854775807LL - 1LL)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
unsigned long long int var_3 = 1741914598764872028ULL;
unsigned short var_4 = (unsigned short)26181;
unsigned short var_5 = (unsigned short)13245;
unsigned char var_6 = (unsigned char)170;
signed char var_7 = (signed char)-32;
signed char var_8 = (signed char)112;
int zero = 0;
bool var_11 = (bool)0;
bool var_12 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_7, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
