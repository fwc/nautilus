/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3710
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3710
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
void test(val<int> var_1, val<long long int> var_2, val<unsigned long long int> var_3, val<unsigned long long int> var_5, val<long long int> var_7, val<unsigned short> var_10, val<unsigned long long int> var_11, val<bool> var_13, val<bool> var_14, val<int> zero, val<unsigned short*> var_15, val<unsigned char*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) min((*var_15), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) ((var_3) >= (max((var_3), (((/* implicit */val<unsigned long long int>) var_1))))))) : (((/* implicit */val<int>) ((val<unsigned char>) max((((/* implicit */val<int>) (val<unsigned char>)84)), (175287649))))))))));
    *var_16 = ((/* implicit */val<unsigned char>) var_14);
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) ((((/* implicit */val<bool>) 15595898715007619518ULL)) && (((/* implicit */val<bool>) 539166642))))), (((((/* implicit */val<bool>) 539166640)) ? (539166640) : (((/* implicit */val<int>) (val<unsigned short>)40767))))))) ? (var_11) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 539166661)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) : (var_2)))) ? (min((((/* implicit */val<unsigned long long int>) var_10)), (var_5))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 539166644)) ? (-539166646) : (539166644))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2079624869;
long long int var_2 = 5217693610320111742LL;
unsigned long long int var_3 = 12880926718725284109ULL;
unsigned long long int var_5 = 16675885526343818302ULL;
long long int var_7 = -8340196257906424091LL;
unsigned short var_10 = (unsigned short)23772;
unsigned long long int var_11 = 10544589835698276255ULL;
bool var_13 = (bool)1;
bool var_14 = (bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)26938;
unsigned char var_16 = (unsigned char)41;
int var_17 = 1527796074;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)0;
    value_mismatch |= var_16 != (unsigned char)1;
    value_mismatch |= var_17 != -2097313889;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_7, var_10, var_11, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
