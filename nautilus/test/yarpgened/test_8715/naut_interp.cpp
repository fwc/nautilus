/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8715
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8715
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
void test(val<unsigned long long int> var_0, val<bool> var_1, val<long long int> var_2, val<int> var_3, val<long long int> var_6, val<unsigned long long int> var_9, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_12, val<unsigned char*> var_13, val<unsigned short*> var_14, val<int*> var_15, val<int*> var_16) {
    *var_12 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)0)) > (((/* implicit */val<int>) (val<unsigned char>)125)))))));
    *var_13 ^= ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) var_10)), (((var_6) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1)))))))), (((((var_0) * (((/* implicit */val<unsigned long long int>) 714516071U)))) * (((val<unsigned long long int>) var_9))))));
    *var_14 = ((/* implicit */val<unsigned short>) ((val<short>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_2)), (var_9)))) || (((/* implicit */val<bool>) (+(7730784901698887583ULL)))))));
    *var_15 = ((/* implicit */val<int>) min((*var_15), (var_3)));
    *var_16 ^= ((/* implicit */val<int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17603248412918790663ULL;
bool var_1 = (bool)1;
long long int var_2 = -8144913902891278870LL;
int var_3 = -1066030126;
long long int var_6 = -6165860592650973774LL;
unsigned long long int var_9 = 10809679882214106215ULL;
unsigned char var_10 = (unsigned char)21;
int zero = 0;
unsigned char var_12 = (unsigned char)17;
unsigned char var_13 = (unsigned char)199;
unsigned short var_14 = (unsigned short)62408;
int var_15 = 431355106;
int var_16 = 252650977;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)255;
    value_mismatch |= var_13 != (unsigned char)208;
    value_mismatch |= var_14 != (unsigned short)1;
    value_mismatch |= var_15 != -1066030126;
    value_mismatch |= var_16 != 252650996;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_6, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
