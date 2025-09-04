/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6875
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6875
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
void test(val<bool> var_0, val<unsigned char> var_1, val<unsigned short> var_3, val<unsigned char> var_4, val<unsigned short> var_7, val<unsigned int> var_9, val<int> zero, val<bool*> var_11, val<unsigned short*> var_12, val<unsigned long long int*> var_13) {
    *var_11 = ((/* implicit */val<bool>) max((*var_11), (((var_9) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))))));
    *var_12 = ((/* implicit */val<unsigned short>) min((*var_12), (((/* implicit */val<unsigned short>) ((min(((~(((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) min(((val<short>)-22200), (((/* implicit */val<short>) (val<unsigned char>)43))))))) + (((/* implicit */val<int>) ((val<unsigned short>) var_1))))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) min((var_3), (((/* implicit */val<unsigned short>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_1 = (unsigned char)67;
unsigned short var_3 = (unsigned short)30533;
unsigned char var_4 = (unsigned char)156;
unsigned short var_7 = (unsigned short)64734;
unsigned int var_9 = 4275627462U;
int zero = 0;
bool var_11 = (bool)0;
unsigned short var_12 = (unsigned short)24508;
unsigned long long int var_13 = 4315929300095777950ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != (unsigned short)868;
    value_mismatch |= var_13 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
