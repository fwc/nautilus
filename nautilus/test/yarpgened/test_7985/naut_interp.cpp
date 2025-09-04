/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7985
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7985
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
void test(val<int> zero, val<int*> var_11, val<long long int*> var_12, val<unsigned long long int*> var_13) {
    *var_11 = ((/* implicit */val<int>) (val<unsigned short>)15066);
    if (((/* implicit */val<bool>) ((val<int>) (val<unsigned char>)52)))
    {
        *var_12 ^= (-((+((((val<bool>)1) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (5617981298036960482LL))))));
        *var_13 += ((/* implicit */val<unsigned long long int>) (-(-2115650037240151302LL)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_11 = -245801938;
long long int var_12 = 7703249226134059081LL;
unsigned long long int var_13 = 9136782554657222402ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 15066;
    value_mismatch |= var_12 != -7703249226134059082LL;
    value_mismatch |= var_13 != 11252432591897373704ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
