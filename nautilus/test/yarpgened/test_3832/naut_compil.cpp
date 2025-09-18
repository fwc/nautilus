/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3832
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3832
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
void test(val<unsigned int> var_6, val<unsigned char> var_7, val<unsigned short> var_10, val<unsigned char> var_12, val<bool> var_13, val<bool> var_17, val<int> zero, val<int*> var_18, val<bool*> var_19) {
    *var_18 = ((/* implicit */val<int>) max((*var_18), (((/* implicit */val<int>) min((((val<unsigned short>) (!(((/* implicit */val<bool>) (val<unsigned short>)1023))))), (((/* implicit */val<unsigned short>) (!(((((/* implicit */val<int>) var_10)) > (((/* implicit */val<int>) (val<unsigned short>)64502))))))))))));
    *var_19 = ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_7))))) ? (((((/* implicit */val<bool>) (val<short>)-28421)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_12)))) : (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) var_17)))))) & (max(((+(((/* implicit */val<int>) (val<short>)-28412)))), ((-(((/* implicit */val<int>) (val<bool>)1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 918792033U;
unsigned char var_7 = (unsigned char)149;
unsigned short var_10 = (unsigned short)37337;
unsigned char var_12 = (unsigned char)55;
bool var_13 = (bool)1;
bool var_17 = (bool)1;
int zero = 0;
int var_18 = 2026454842;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 2026454842;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_10, var_12, var_13, var_17, zero, &var_18, &var_19);
  checksum();
}
