/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 140
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=140
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
void test(val<int> zero, val<bool*> var_18, val<bool*> var_19) {
    *var_18 = ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) max((max((((/* implicit */val<unsigned int>) (val<signed char>)-111)), (3673437915U))), (((2083301201U) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)110)))))))) % ((+(9223372036854775805LL)))));
    *var_19 = ((val<bool>) ((val<bool>) ((((/* implicit */val<int>) (val<signed char>)-107)) % (((/* implicit */val<int>) (val<signed char>)111)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
bool var_18 = (bool)0;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
