/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7163
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7163
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
void test(val<unsigned int> var_3, val<int> zero, val<unsigned short*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) min((((((/* implicit */val<bool>) (val<unsigned short>)65511)) ? (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<unsigned char>)153))))) : (-3554473438678949949LL))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) min(((val<unsigned short>)29), (((/* implicit */val<unsigned short>) (val<short>)32767))))) % (((/* implicit */val<int>) min(((val<unsigned short>)25091), (((/* implicit */val<unsigned short>) (val<unsigned char>)255))))))))));
    *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((458752), (((/* implicit */val<int>) (val<unsigned short>)59034))))) ? (((/* implicit */val<int>) (val<unsigned short>)31)) : ((~(((/* implicit */val<int>) (val<bool>)1))))))) ? (var_3) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)65490)) ? (-4828851417027682389LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)63)))))) ? (((((/* implicit */val<bool>) (val<signed char>)53)) ? (3281114816U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)127))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<bool>)1)) | (((/* implicit */val<int>) (val<signed char>)38)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 884860002U;
int zero = 0;
unsigned short var_13 = (unsigned short)63841;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)65382;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_13, &var_14);
  checksum();
}
