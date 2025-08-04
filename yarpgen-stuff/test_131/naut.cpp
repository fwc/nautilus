/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 131
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=131
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
void test(val<unsigned long long int> var_6, val<unsigned char> var_9, val<long long int> var_11, val<bool> var_15, val<int> zero, val<unsigned char*> var_19, val<unsigned short*> var_20, val<int*> var_21, val<unsigned long long int*> var_22) {
    *var_19 = var_9;
    *var_20 = ((/* implicit */val<unsigned short>) 6910118350179358091LL);
    *var_21 = ((/* implicit */val<int>) max((((/* implicit */val<long long int>) var_15)), (6910118350179358120LL)));
    *var_22 -= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6))))) + (((((/* implicit */val<bool>) max((var_11), (((/* implicit */val<long long int>) (val<short>)-27797))))) ? (((0) + (((/* implicit */val<int>) (val<signed char>)-4)))) : (((/* implicit */val<int>) var_9))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13057798975976862961ULL;
unsigned char var_9 = (unsigned char)234;
long long int var_11 = 5704146726472038886LL;
bool var_15 = (bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)208;
unsigned short var_20 = (unsigned short)22855;
int var_21 = -1179431371;
unsigned long long int var_22 = 8876884590566498965ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)234;
    value_mismatch |= var_20 != (unsigned short)21899;
    value_mismatch |= var_21 != 844715432;
    value_mismatch |= var_22 != 8876884590566498969ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, var_11, var_15, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
