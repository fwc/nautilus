/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 861
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=861
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned long long int> var_1, val<signed char> var_4, val<unsigned long long int> var_10, val<int> zero, val<unsigned int*> var_13, val<unsigned long long int*> var_14) {
    *var_13 += ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-74))) : (var_10))))))) * (((/* implicit */val<int>) var_4))));
    *var_14 = ((val<unsigned long long int>) (val<signed char>)-74);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9319068219009767150ULL;
signed char var_4 = (signed char)-46;
unsigned long long int var_10 = 393540400401134662ULL;
int zero = 0;
unsigned int var_13 = 2839661466U;
unsigned long long int var_14 = 16471321483203374074ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2839661466U;
    value_mismatch |= var_14 != 18446744073709551542ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
