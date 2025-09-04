/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 810
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=810
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<unsigned short> var_5, val<unsigned long long int> var_8, val<unsigned long long int> var_9, val<unsigned long long int> var_10, val<int> zero, val<int*> var_12, val<bool*> var_13, val<int*> var_14, val<unsigned short*> var_15, val<unsigned short*> var_16) {
    *var_12 = ((/* implicit */val<int>) (val<unsigned short>)1990);
    *var_13 = ((/* implicit */val<bool>) var_8);
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)228))) - (7710764746549626747LL))))) ? (var_9) : (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<short>)-27600)))))));
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_5)) / (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) || (((/* implicit */val<bool>) var_8)))))));
    *var_16 = ((/* implicit */val<unsigned short>) min((*var_16), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_10)) ? ((+(-7710764746549626751LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
unsigned int var_1 = 2095668172U;
unsigned short var_5 = (unsigned short)42546;
unsigned long long int var_8 = 16661714025906230225ULL;
unsigned long long int var_9 = 8312535181512115775ULL;
unsigned long long int var_10 = 9845406037729181048ULL;
int zero = 0;
int var_12 = -1066932408;
bool var_13 = (bool)1;
int var_14 = 1688887958;
unsigned short var_15 = (unsigned short)56793;
unsigned short var_16 = (unsigned short)55999;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1990;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != -1258846657;
    value_mismatch |= var_15 != (unsigned short)42546;
    value_mismatch |= var_16 != (unsigned short)55999;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
