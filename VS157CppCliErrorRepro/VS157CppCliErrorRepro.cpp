#include "stdafx.h"
#include "NativeConversions.h"

using namespace System;
using namespace PaintDotNet::Imaging;

int main(array<System::String ^> ^args)
{
    Guid managedGuid("{a2296057-ea42-4099-983b-539fb6505426}");
    GUID nativeGuid = NativeConversions::ToNative(managedGuid);
    Guid managedGuid2 = NativeConversions::FromNative(nativeGuid);

    return 0;
}
