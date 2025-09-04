/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9348
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9348
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
void test(val<long long int> var_13, val<int> zero, val<bool*> var_16, val<unsigned short*> var_17, val<long long int*> var_18, val<bool*> var_19) {
    *var_16 = ((-6714058311765816950LL) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))));
    *var_17 = ((/* implicit */val<unsigned short>) ((34604768392550184LL) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)13087)))));
    *var_18 -= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)52449)) ? (((/* implicit */val<int>) (val<unsigned short>)13094)) : (((/* implicit */val<int>) (val<unsigned short>)13083))));
    *var_19 = ((/* implicit */val<bool>) max((*var_19), (((/* implicit */val<bool>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = 3504394906684108275LL;
int zero = 0;
bool var_16 = (bool)1;
unsigned short var_17 = (unsigned short)19285;
long long int var_18 = -6496684573961992680LL;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned short)46911;
    value_mismatch |= var_18 != -6496684573962005774LL;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
