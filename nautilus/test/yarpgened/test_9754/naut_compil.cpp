/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9754
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9754
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
void test(val<unsigned short> var_0, val<unsigned char> var_2, val<unsigned long long int> var_6, val<unsigned char> var_7, val<int> var_12, val<int> zero, val<unsigned short*> var_18, val<short*> var_19, val<unsigned int*> var_20, val<signed char*> var_21) {
    *var_18 = ((/* implicit */val<unsigned short>) (val<unsigned char>)47);
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) min((-1922751506), (((/* implicit */val<int>) (val<signed char>)113))))), (var_6)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<long long int>) var_7)))))) : (var_12)));
    *var_20 = ((/* implicit */val<unsigned int>) ((max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)222)) ? (527599717U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2)))))), (13616182148022292801ULL))) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) (-(((/* implicit */val<int>) var_0)))))))));
    *var_21 = ((/* implicit */val<signed char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42932;
unsigned char var_2 = (unsigned char)217;
unsigned long long int var_6 = 214078127229347922ULL;
unsigned char var_7 = (unsigned char)209;
int var_12 = -198304193;
int zero = 0;
unsigned short var_18 = (unsigned short)56595;
short var_19 = (short)-18484;
unsigned int var_20 = 492166261U;
signed char var_21 = (signed char)-121;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)47;
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != (signed char)82;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_7, var_12, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
