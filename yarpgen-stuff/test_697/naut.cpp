/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 697
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=697
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
void test(val<unsigned char> var_10, val<int> zero, val<unsigned short*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) max((*var_12), (((/* implicit */val<unsigned short>) var_10))));
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)145))) != (17644376203543646105ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)90;
int zero = 0;
unsigned short var_12 = (unsigned short)1365;
long long int var_13 = -5414065805701484179LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)1365;
    value_mismatch |= var_13 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
