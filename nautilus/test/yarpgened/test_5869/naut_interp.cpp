/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5869
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5869
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
void test(val<signed char> var_2, val<unsigned char> var_3, val<unsigned long long int> var_8, val<int> var_9, val<int> zero, val<unsigned int*> var_11, val<short*> var_12) {
    *var_11 = ((/* implicit */val<unsigned int>) max((*var_11), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) min(((val<unsigned char>)228), (((/* implicit */val<unsigned char>) var_2)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_8) == (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) (val<unsigned char>)7)), (var_9)))))))) : (max((((((/* implicit */val<bool>) (val<short>)(-32767 - 1))) ? (((/* implicit */val<unsigned long long int>) 4294967040LL)) : (12740527637573709965ULL))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) (val<signed char>)0)), (-13431065)))))))))));
    *var_12 = ((/* implicit */val<short>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) max(((val<unsigned char>)170), ((val<unsigned char>)20))))))), (min((((((/* implicit */val<bool>) (val<unsigned char>)224)) ? (((/* implicit */val<int>) (val<unsigned char>)170)) : (((/* implicit */val<int>) var_3)))), ((-(((/* implicit */val<int>) (val<unsigned char>)161))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-28;
unsigned char var_3 = (unsigned char)76;
unsigned long long int var_8 = 9770248731704759932ULL;
int var_9 = -1607383455;
int zero = 0;
unsigned int var_11 = 3508185207U;
short var_12 = (short)18163;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 3508185207U;
    value_mismatch |= var_12 != (short)-161;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_8, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
