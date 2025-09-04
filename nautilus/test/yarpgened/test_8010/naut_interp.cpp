/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8010
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8010
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_1, val<signed char> var_2, val<unsigned char> var_4, val<unsigned short> var_5, val<int> zero, val<unsigned int*> var_11, val<int*> var_12, val<long long int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned int>) max((*var_11), (((/* implicit */val<unsigned int>) (val<signed char>)14))));
    *var_12 = ((/* implicit */val<int>) max((*var_12), (((/* implicit */val<int>) (!(((((((/* implicit */val<bool>) var_1)) && (((/* implicit */val<bool>) var_0)))) && (((/* implicit */val<bool>) (val<unsigned char>)99)))))))));
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_2)), (var_5)))) + (((((/* implicit */val<int>) (val<unsigned short>)19023)) + (((/* implicit */val<int>) var_4))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17328988091811607468ULL;
unsigned long long int var_1 = 17064756063195218351ULL;
signed char var_2 = (signed char)-70;
unsigned char var_4 = (unsigned char)253;
unsigned short var_5 = (unsigned short)1260;
int zero = 0;
unsigned int var_11 = 1039437665U;
int var_12 = 1015529132;
long long int var_13 = -7988756798974010130LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1039437665U;
    value_mismatch |= var_12 != 1015529132;
    value_mismatch |= var_13 != 84742LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
