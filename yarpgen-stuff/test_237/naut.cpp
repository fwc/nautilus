/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 237
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=237
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
void test(val<int> var_1, val<unsigned long long int> var_2, val<unsigned char> var_5, val<int> zero, val<unsigned short*> var_10, val<short*> var_11, val<int*> var_12, val<unsigned long long int*> var_13) {
    *var_10 = ((/* implicit */val<unsigned short>) var_1);
    *var_11 = ((/* implicit */val<short>) var_2);
    *var_12 = ((/* implicit */val<int>) ((((/* implicit */val<int>) ((val<signed char>) 15121503707836762976ULL))) > (((/* implicit */val<int>) (val<unsigned short>)43090))));
    *var_13 = ((/* implicit */val<unsigned long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -207260559;
unsigned long long int var_2 = 1822534898002857626ULL;
unsigned char var_5 = (unsigned char)42;
int zero = 0;
unsigned short var_10 = (unsigned short)17974;
short var_11 = (short)-27569;
int var_12 = 679079171;
unsigned long long int var_13 = 16984225310346678959ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)29809;
    value_mismatch |= var_11 != (short)-29030;
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != 42ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
