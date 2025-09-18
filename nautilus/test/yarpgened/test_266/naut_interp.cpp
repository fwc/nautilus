/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 266
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=266
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
void test(val<unsigned short> var_0, val<int> var_6, val<int> var_9, val<unsigned long long int> var_10, val<unsigned short> var_14, val<int> var_16, val<unsigned long long int> var_18, val<int> var_19, val<int> zero, val<unsigned short*> var_20, val<unsigned short*> var_21, val<unsigned short*> var_22) {
    *var_20 = ((/* implicit */val<unsigned short>) max((*var_20), (((/* implicit */val<unsigned short>) ((((max((15748189696711672009ULL), (18446744073709551605ULL))) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_16)) || (((/* implicit */val<bool>) var_0)))))))) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((1850765994) >= (((/* implicit */val<int>) var_0)))))) | ((+(11229068031640271735ULL))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))) != (((/* implicit */val<int>) var_14)))))))))));
    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) min((var_18), ((-(8471441444157800702ULL)))))) ? ((~(((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<unsigned short>)55282)) : (var_19))))) : (var_6)));
    *var_22 = var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10487;
int var_6 = -1037926735;
int var_9 = -1226222361;
unsigned long long int var_10 = 3535994005033855585ULL;
unsigned short var_14 = (unsigned short)45344;
int var_16 = 590704749;
unsigned long long int var_18 = 8239812131674479219ULL;
int var_19 = 801998222;
int zero = 0;
unsigned short var_20 = (unsigned short)57046;
unsigned short var_21 = (unsigned short)44520;
unsigned short var_22 = (unsigned short)65032;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)64375;
    value_mismatch |= var_21 != (unsigned short)10253;
    value_mismatch |= var_22 != (unsigned short)10487;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_9, var_10, var_14, var_16, var_18, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
}
