#!/bin/bash -ei

SCRIPT_DIR=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
AADL_DIR=$SCRIPT_DIR/..
ROOT_DIR=$SCRIPT_DIR/../..

FMIDE=$SIREUM_HOME/bin/linux/fmide/fmide
FMIDE_CLI="$FMIDE -nosplash -console -consoleLog -data @user.home/.sireum -application org.sireum.aadl.osate.cli"

eval "$FMIDE_CLI hamr codegen \
  --verbose \
  --platform seL4_Only \
  --run-transpiler \
  --camkes-output-dir $ROOT_DIR/hamr-sel4-only/camkes \
  --aadl-root-dir $AADL_DIR \
  $AADL_DIR/.project"
