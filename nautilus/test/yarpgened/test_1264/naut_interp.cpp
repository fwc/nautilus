/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1264
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1264
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
void test(val<signed char> var_3, val<unsigned short> var_10, val<unsigned char> var_16, val<int> zero, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned long long int>) max((*var_17), (((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) + (((val<long long int>) var_10)))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) min((*var_18), (((/* implicit */val<unsigned long long int>) var_16))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-93;
unsigned short var_10 = (unsigned short)18036;
unsigned char var_16 = (unsigned char)239;
int zero = 0;
unsigned long long int var_17 = 15085830235067705631ULL;
unsigned long long int var_18 = 7383043489265037709ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 18446744073709533672ULL;
    value_mismatch |= var_18 != 239ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_10, var_16, zero, &var_17, &var_18);
  checksum();
}
