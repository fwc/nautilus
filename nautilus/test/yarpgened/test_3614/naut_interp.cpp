/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3614
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3614
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
void test(val<unsigned char> var_2, val<unsigned char> var_3, val<unsigned char> var_7, val<unsigned char> var_8, val<unsigned char> var_9, val<unsigned char> var_13, val<int> zero, val<unsigned char*> var_15, val<unsigned char*> var_16, val<unsigned char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<int>) (val<unsigned char>)0)) * (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2)))))))));
    if (((/* implicit */val<bool>) (~(max((((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) var_3)))))))
    {
        *var_16 += ((/* implicit */val<unsigned char>) min(((+(((/* implicit */val<int>) max((var_8), (var_3)))))), (((/* implicit */val<int>) var_13))));
        *var_17 &= var_2;
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)247;
unsigned char var_3 = (unsigned char)17;
unsigned char var_7 = (unsigned char)162;
unsigned char var_8 = (unsigned char)186;
unsigned char var_9 = (unsigned char)68;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
unsigned char var_15 = (unsigned char)180;
unsigned char var_16 = (unsigned char)202;
unsigned char var_17 = (unsigned char)103;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != (unsigned char)132;
    value_mismatch |= var_17 != (unsigned char)103;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_8, var_9, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
}
