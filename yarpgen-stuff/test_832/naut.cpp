/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 832
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=832
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
void test(val<int> var_10, val<unsigned char> var_15, val<unsigned char> var_18, val<int> zero, val<unsigned char*> var_20, val<int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned char>) var_10);
    *var_21 = ((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) var_15)) : (min(((-(((/* implicit */val<int>) (val<unsigned char>)4)))), ((-(((/* implicit */val<int>) (val<unsigned char>)3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 171370188;
unsigned char var_15 = (unsigned char)184;
unsigned char var_18 = (unsigned char)179;
int zero = 0;
unsigned char var_20 = (unsigned char)79;
int var_21 = 349032920;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)204;
    value_mismatch |= var_21 != 184;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_15, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
