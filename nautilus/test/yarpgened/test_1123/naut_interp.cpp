/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1123
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1123
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
void test(val<short> var_0, val<int> var_3, val<int> var_5, val<long long int> var_6, val<int> zero, val<unsigned short*> var_10, val<unsigned short*> var_11) {
    *var_10 *= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((952175169U) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)199)))))) ? (min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_0))))), (var_3))) : (var_3)));
    *var_11 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned long long int>) min((min((1521318621), (((/* implicit */val<int>) (val<unsigned char>)56)))), (((/* implicit */val<int>) ((var_6) > (((/* implicit */val<long long int>) 3342792126U)))))))), (((((/* implicit */val<bool>) min((var_6), (((/* implicit */val<long long int>) (val<unsigned char>)255))))) ? (((val<unsigned long long int>) var_3)) : (((/* implicit */val<unsigned long long int>) var_5))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23885;
int var_3 = -912282483;
int var_5 = 1705488808;
long long int var_6 = 7624821768142223880LL;
int zero = 0;
unsigned short var_10 = (unsigned short)337;
unsigned short var_11 = (unsigned short)37578;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)9629;
    value_mismatch |= var_11 != (unsigned short)44173;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, zero, &var_10, &var_11);
  checksum();
}
