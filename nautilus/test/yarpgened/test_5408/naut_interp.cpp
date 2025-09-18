/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5408
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5408
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
void test(val<unsigned short> var_3, val<int> zero, val<int*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<int>) (-((~(min((-8455975452829932283LL), (((/* implicit */val<long long int>) (val<unsigned short>)4095))))))));
    *var_20 = ((/* implicit */val<signed char>) min((min((min((((/* implicit */val<long long int>) 9U)), (-8455975452829932298LL))), (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_3)), (1526185396)))))), (((val<long long int>) min((((/* implicit */val<unsigned short>) (val<unsigned char>)255)), ((val<unsigned short>)61441))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20443;
int zero = 0;
int var_19 = 2018755103;
signed char var_20 = (signed char)-18;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -1733942010;
    value_mismatch |= var_20 != (signed char)-10;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_19, &var_20);
  checksum();
}
