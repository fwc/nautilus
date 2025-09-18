/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2401
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2401
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
void test(val<int> zero, val<unsigned short*> var_18, val<int*> var_19, val<unsigned short*> var_20, val<int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 18446744073709551607ULL)) ? (((/* implicit */val<int>) (val<unsigned short>)23)) : (-1881008710)));
    *var_19 = ((/* implicit */val<int>) (-(min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)242)) ? (-1661710613) : (((/* implicit */val<int>) (val<unsigned char>)177))))), (min((2251799813685247ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)234))))))));
    *var_20 &= ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) max(((val<unsigned char>)169), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (val<unsigned short>)23))))))))));
    *var_21 = (+(((((8191) < (-1064621321))) ? (1547464736) : (((/* implicit */val<int>) max(((val<unsigned char>)255), ((val<unsigned char>)234)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_18 = (unsigned short)30117;
int var_19 = 376781222;
unsigned short var_20 = (unsigned short)51209;
int var_21 = -631746363;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)23;
    value_mismatch |= var_19 != -234;
    value_mismatch |= var_20 != (unsigned short)51201;
    value_mismatch |= var_21 != 255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
