/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1794
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1794
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
void test(val<unsigned short> var_3, val<unsigned long long int> var_5, val<bool> var_8, val<unsigned char> var_13, val<signed char> var_15, val<int> zero, val<unsigned int*> var_16, val<unsigned short*> var_17, val<unsigned char*> var_18) {
    *var_16 = ((/* implicit */val<unsigned int>) var_13);
    *var_17 = ((/* implicit */val<unsigned short>) var_15);
    *var_18 = ((/* implicit */val<unsigned char>) (+(((((/* implicit */val<unsigned long long int>) ((var_8) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_3))))) / (((((/* implicit */val<bool>) var_5)) ? (7514426250521772532ULL) : (((/* implicit */val<unsigned long long int>) -277516751667645940LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)460;
unsigned long long int var_5 = 8856872306657027181ULL;
bool var_8 = (bool)0;
unsigned char var_13 = (unsigned char)153;
signed char var_15 = (signed char)-18;
int zero = 0;
unsigned int var_16 = 3868274717U;
unsigned short var_17 = (unsigned short)57121;
unsigned char var_18 = (unsigned char)105;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 153U;
    value_mismatch |= var_17 != (unsigned short)65518;
    value_mismatch |= var_18 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_8, var_13, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
