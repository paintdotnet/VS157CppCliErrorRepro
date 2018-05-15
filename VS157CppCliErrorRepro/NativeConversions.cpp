#include "stdafx.h"
#include "NativeConversions.h"

using namespace PaintDotNet::Animation;
using namespace PaintDotNet::Direct2D;
using namespace PaintDotNet::DirectWrite;
using namespace PaintDotNet::Dxgi;
using namespace PaintDotNet::Imaging;
using namespace PaintDotNet::Rendering;
using namespace System;
using namespace System::Runtime::InteropServices;

// Guid
GUID NativeConversions::ToNative(const Guid& guid)
{
    return *(reinterpret_cast<const GUID*>(&guid));
}

Guid NativeConversions::FromNative(const GUID& guid)
{
    return *(reinterpret_cast<const Guid*>(&guid));
}

// FILETIME
::FILETIME NativeConversions::ToNative(const System::Runtime::InteropServices::ComTypes::FILETIME& fileTime)
{
    return *(reinterpret_cast<const ::FILETIME*>(&fileTime));
}

System::Runtime::InteropServices::ComTypes::FILETIME NativeConversions::FromNative(const ::FILETIME& fileTime)
{
    return *(reinterpret_cast<const System::Runtime::InteropServices::ComTypes::FILETIME*>(&fileTime));
}

// SurfaceDescription
SurfaceDescription NativeConversions::FromNative(const DXGI_SURFACE_DESC& dxgiSurfaceDesc)
{
    return *(reinterpret_cast<const SurfaceDescription*>(&dxgiSurfaceDesc));
}

DXGI_SURFACE_DESC NativeConversions::ToNative(const SurfaceDescription& surfaceDescription)
{
    return *(reinterpret_cast<const DXGI_SURFACE_DESC*>(&surfaceDescription));
}

// SharedResource
DXGI_SHARED_RESOURCE NativeConversions::ToNative(const SharedResource& sharedResource)
{
    return *(reinterpret_cast<const DXGI_SHARED_RESOURCE*>(&sharedResource));
}

// RenderTargetProperties
D2D1_RENDER_TARGET_PROPERTIES NativeConversions::ToNative(const RenderTargetProperties& renderTargetProperties)
{
    return *(reinterpret_cast<const D2D1_RENDER_TARGET_PROPERTIES*>(&renderTargetProperties));
}

// HwndRenderTargetProperties
D2D1_HWND_RENDER_TARGET_PROPERTIES NativeConversions::ToNative(const HwndRenderTargetProperties& hwndRenderTargetProperties)
{
    return *(reinterpret_cast<const D2D1_HWND_RENDER_TARGET_PROPERTIES*>(&hwndRenderTargetProperties));
}

// DrawingStateDescription
D2D1_DRAWING_STATE_DESCRIPTION NativeConversions::ToNative(const DrawingStateDescription& drawingStateDescription)
{
    return *(reinterpret_cast<const D2D1_DRAWING_STATE_DESCRIPTION*>(&drawingStateDescription));
}

DrawingStateDescription NativeConversions::FromNative(const D2D1_DRAWING_STATE_DESCRIPTION& drawingStateDescription)
{
    return *(reinterpret_cast<const DrawingStateDescription*>(&drawingStateDescription));
}

// DrawingStateDescription1
D2D1_DRAWING_STATE_DESCRIPTION1 NativeConversions::ToNative(const DrawingStateDescription1& drawingStateDescription)
{
    return *(reinterpret_cast<const D2D1_DRAWING_STATE_DESCRIPTION1*>(&drawingStateDescription));
}

DrawingStateDescription1 NativeConversions::FromNative(const D2D1_DRAWING_STATE_DESCRIPTION1& drawingStateDescription)
{
    return *(reinterpret_cast<const DrawingStateDescription1*>(&drawingStateDescription));
}

// FactoryOptions
D2D1_FACTORY_OPTIONS NativeConversions::ToNative(const Direct2DFactoryOptions& factoryOptions)
{
    return *(reinterpret_cast<const D2D1_FACTORY_OPTIONS*>(&factoryOptions));
}

// BrushProperties
D2D1_BRUSH_PROPERTIES NativeConversions::ToNative(const BrushProperties& brushProperties)
{
    return *(reinterpret_cast<const D2D1_BRUSH_PROPERTIES*>(&brushProperties));
}

// DeviceBitmapBrushProperties
D2D1_BITMAP_BRUSH_PROPERTIES NativeConversions::ToNative(const DeviceBitmapBrushProperties& deviceBitmapBrushProperties)
{
    return *(reinterpret_cast<const D2D1_BITMAP_BRUSH_PROPERTIES*>(&deviceBitmapBrushProperties));
}

D2D1_BITMAP_BRUSH_PROPERTIES1 NativeConversions::ToNative1(const DeviceBitmapBrushProperties& deviceBitmapBrushProperties)
{
    return *(reinterpret_cast<const D2D1_BITMAP_BRUSH_PROPERTIES1*>(&deviceBitmapBrushProperties));
}

// DeviceBitmapProperties
D2D1_BITMAP_PROPERTIES NativeConversions::ToNative(const DeviceBitmapProperties& deviceBitmapProperties)
{
    return *(reinterpret_cast<const D2D1_BITMAP_PROPERTIES*>(&deviceBitmapProperties));
}

// DeviceBitmapProperties1
HRESULT NativeConversions::ToNative(
    DeviceBitmapProperties1& deviceBitmapProperties,
    D2D1_BITMAP_PROPERTIES1* pBitmapProperties,
    ID2D1ColorContext** ppColorContext)
{
    throw gcnew NotImplementedException();
}

// DeviceImageBrushProperties
D2D1_IMAGE_BRUSH_PROPERTIES NativeConversions::ToNative(const DeviceImageBrushProperties& deviceImageBrushProperties)
{
    throw gcnew NotImplementedException();
}

// UnsafeMappedRect
UnsafeMappedRect NativeConversions::FromNative(const D2D1_MAPPED_RECT& mappedRect)
{
    return *(reinterpret_cast<const UnsafeMappedRect*>(&mappedRect));
}

UnsafeMappedRect NativeConversions::FromNative(const DXGI_MAPPED_RECT& mappedRect)
{
    return *(reinterpret_cast<const UnsafeMappedRect*>(&mappedRect));
}

// LinearGradientBrushProperties
D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES NativeConversions::ToNative(const LinearGradientBrushProperties& linearGradientBrushProperties)
{
    return *(reinterpret_cast<const D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES*>(&linearGradientBrushProperties));
}

// RadialGradientBrushProperties
D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES NativeConversions::ToNative(const RadialGradientBrushProperties& radialGradientBrushProperties)
{
    return *(reinterpret_cast<const D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES*>(&radialGradientBrushProperties));
}

// StrokeStyleProperties
D2D1_STROKE_STYLE_PROPERTIES NativeConversions::ToNative(const StrokeStyleProperties& strokeStyleProperties)
{
    return *(reinterpret_cast<const D2D1_STROKE_STYLE_PROPERTIES*>(&strokeStyleProperties));
}

// StrokeStyleProperties1
D2D1_STROKE_STYLE_PROPERTIES1 NativeConversions::ToNative(const StrokeStyleProperties1& strokeStyleProperties)
{
    return *(reinterpret_cast<const D2D1_STROKE_STYLE_PROPERTIES1*>(&strokeStyleProperties));
}

// TransformedVirtualDeviceImageProperties
D2D1_TRANSFORMED_IMAGE_SOURCE_PROPERTIES NativeConversions::ToNative(const PaintDotNet::Direct2D::TransformedVirtualDeviceImageProperties& properties)
{
    return *(reinterpret_cast<const D2D1_TRANSFORMED_IMAGE_SOURCE_PROPERTIES*>(&properties));
}

TransformedVirtualDeviceImageProperties NativeConversions::FromNative(const D2D1_TRANSFORMED_IMAGE_SOURCE_PROPERTIES& properties)
{
    return *(reinterpret_cast<const TransformedVirtualDeviceImageProperties*>(&properties));
}

// PixelFormat
D2D1_PIXEL_FORMAT NativeConversions::ToNative(const Direct2DPixelFormat& pixelFormat)
{
    return *(reinterpret_cast<const D2D1_PIXEL_FORMAT*>(&pixelFormat));
}

Direct2DPixelFormat NativeConversions::FromNative(const D2D1_PIXEL_FORMAT& d2dPixelFormat)
{
    return *(reinterpret_cast<const Direct2DPixelFormat*>(&d2dPixelFormat));
}

// ColorRgba128Float
D2D1_COLOR_F NativeConversions::ToNative(const PaintDotNet::Imaging::ColorRgba128Float& colorF)
{
    return *(reinterpret_cast<const D2D1_COLOR_F*>(&colorF));
}

ColorRgba128Float NativeConversions::FromNative(const D2D1_COLOR_F& colorF)
{
    return *(reinterpret_cast<const ColorRgba128Float*>(&colorF));
}

// PointFloat
D2D1_POINT_2F NativeConversions::ToNative(const PointFloat& pointF)
{
    return *(reinterpret_cast<const D2D1_POINT_2F*>(&pointF));
}

PointFloat NativeConversions::FromNative(const D2D1_POINT_2F& d2dPointF)
{
    return *(reinterpret_cast<const PointFloat*>(&d2dPointF));
}

// SizeFloat
D2D1_SIZE_F NativeConversions::ToNative(const SizeFloat& sizeF)
{
    return *(reinterpret_cast<const D2D1_SIZE_F*>(&sizeF));
}

SizeFloat NativeConversions::FromNative(const D2D1_SIZE_F& d2dSizeF)
{
    return *(reinterpret_cast<const SizeFloat*>(&d2dSizeF));
}

// PointInt32
D2D1_POINT_2U NativeConversions::ToNative(const PointInt32& point)
{
    return *(reinterpret_cast<const D2D1_POINT_2U*>(&point));
}

PointInt32 NativeConversions::FromNative(const D2D1_POINT_2U& d2dPoint)
{
    return *(reinterpret_cast<const PointInt32*>(&d2dPoint));
}

// SizeInt32
D2D1_SIZE_U NativeConversions::ToNative(const SizeInt32& size)
{
    return *(reinterpret_cast<const D2D1_SIZE_U*>(&size));
}

SizeInt32 NativeConversions::FromNative(const D2D1_SIZE_U& d2dSizeU)
{
    return *(reinterpret_cast<const SizeInt32*>(&d2dSizeU));
}

SizeInt32 NativeConversions::FromNative(const SIZE& win32Size)
{
    return *(reinterpret_cast<const SizeInt32*>(&win32Size));
}

// RectInt32
D2D1_RECT_U NativeConversions::ToNative(const RectInt32& rect)
{
    const WICRect& wicRect = *(reinterpret_cast<const WICRect*>(&rect));

    D2D1_RECT_U d2dRect;
    d2dRect.left = wicRect.X;
    d2dRect.top = wicRect.Y;
    d2dRect.right = wicRect.X + wicRect.Width;
    d2dRect.bottom = wicRect.Y + wicRect.Height;

    return d2dRect;
}

RECT NativeConversions::ToWin32Rect(const D2D1_RECT_U& rect)
{
    return *(reinterpret_cast<const RECT*>(&rect));
}

RECT NativeConversions::ToWin32Rect(const RectInt32& rect)
{
    return ToWin32Rect(ToNative(rect));
}

WICRect NativeConversions::ToWICRect(const RectInt32& rect)
{
    return *(reinterpret_cast<const WICRect*>(&rect));
}

WICRect NativeConversions::ToWICRect(const D2D1_RECT_U& d2dRect)
{
    WICRect wicRect;
    wicRect.X = d2dRect.left;
    wicRect.Y = d2dRect.top;
    wicRect.Width = d2dRect.right - d2dRect.left;
    wicRect.Height = d2dRect.bottom - d2dRect.top;
    return wicRect;
}

RectInt32 NativeConversions::FromNative(const D2D1_RECT_U& d2dRect)
{
    return RectInt32::FromEdges(d2dRect.left, d2dRect.top, d2dRect.right, d2dRect.bottom);
}

RectInt32 NativeConversions::FromNative(const RECT& win32Rect)
{
    return RectInt32::FromEdges(win32Rect.left, win32Rect.top, win32Rect.right, win32Rect.bottom);
}

RectInt32 NativeConversions::FromNative(const WICRect& wicRect)
{
    return *(reinterpret_cast<const RectInt32*>(&wicRect));
}

// RectFloat
D2D1_RECT_F NativeConversions::ToNative(const RectFloat& rectF)
{
    RectFloat& rectFNonConst = const_cast<RectFloat&>(rectF);

    if (float::IsNegativeInfinity(rectFNonConst.X) &&
        float::IsNegativeInfinity(rectFNonConst.Y) &&
        float::IsPositiveInfinity(rectFNonConst.Width) &&
        float::IsPositiveInfinity(rectFNonConst.Height))
    {
        return D2D1::InfiniteRect();
    }
    else
    {
        return D2D1::RectF(rectFNonConst.X, rectFNonConst.Y, rectFNonConst.X + rectFNonConst.Width, rectFNonConst.Y + rectFNonConst.Height);
    }
}

RectFloat NativeConversions::FromNative(const D2D1_RECT_F& d2dRectF)
{
    if (float::IsNegativeInfinity(d2dRectF.left) &&
        float::IsNegativeInfinity(d2dRectF.top) &&
        float::IsPositiveInfinity(d2dRectF.right) &&
        float::IsPositiveInfinity(d2dRectF.bottom))
    {
        return RectFloat::Infinite;
    }
    else
    {
        return RectFloat::FromEdges(d2dRectF.left, d2dRectF.top, d2dRectF.right, d2dRectF.bottom);
    }
}

// Matrix3x2Float
D2D1_MATRIX_3X2_F NativeConversions::ToNative(const Matrix3x2Float& matrix)
{
    return *(reinterpret_cast<const D2D1_MATRIX_3X2_F*>(&matrix));
}

DWRITE_MATRIX NativeConversions::ToNativeDWrite(const Matrix3x2Float& matrix)
{
    return *(reinterpret_cast<const DWRITE_MATRIX*>(&matrix));
}

Matrix3x2Float NativeConversions::FromNative(const DWRITE_MATRIX& matrix)
{
    return *(reinterpret_cast<const Matrix3x2Float*>(&matrix));
}

Matrix3x2Float NativeConversions::FromNative(const D2D1_MATRIX_3X2_F& matrix)
{
    return *(reinterpret_cast<const Matrix3x2Float*>(&matrix));
}

// Matrix4x3Float
D2D1_MATRIX_4X3_F NativeConversions::ToNative(const Matrix4x3Float& matrix)
{
    return *(reinterpret_cast<const D2D1_MATRIX_4X3_F*>(&matrix));
}

Matrix4x3Float NativeConversions::FromNative(const D2D1_MATRIX_4X3_F& matrix)
{
    return *(reinterpret_cast<const Matrix4x3Float*>(&matrix));
}

// Matrix4x4Float
D2D1_MATRIX_4X4_F NativeConversions::ToNative(const Matrix4x4Float& matrix)
{
    return *(reinterpret_cast<const D2D1_MATRIX_4X4_F*>(&matrix));
}

Matrix4x4Float NativeConversions::FromNative(const D2D1_MATRIX_4X4_F& matrix)
{
    return *(reinterpret_cast<const Matrix4x4Float*>(&matrix));
}

// Matrix5x4Float
D2D1_MATRIX_5X4_F NativeConversions::ToNative(const Matrix5x4Float& matrix)
{
    return *(reinterpret_cast<const D2D1_MATRIX_5X4_F*>(&matrix));
}

Matrix5x4Float NativeConversions::FromNative(const D2D1_MATRIX_5X4_F& matrix)
{
    return *(reinterpret_cast<const Matrix5x4Float*>(&matrix));
}

// EllipseFloat
D2D1_ELLIPSE NativeConversions::ToNative(const EllipseFloat& ellipse)
{
    return *(reinterpret_cast<const D2D1_ELLIPSE*>(&ellipse));
}

EllipseFloat NativeConversions::FromNative(const D2D1_ELLIPSE& ellipse)
{
    return *(reinterpret_cast<const EllipseFloat*>(&ellipse));
}

// PointDescriptionFloat
D2D1_POINT_DESCRIPTION NativeConversions::ToNative(const PointDescriptionFloat& pointDescription)
{
    return *(reinterpret_cast<const D2D1_POINT_DESCRIPTION*>(&pointDescription));
}

PointDescriptionFloat NativeConversions::FromNative(const D2D1_POINT_DESCRIPTION& pointDescription)
{
    return *(reinterpret_cast<const PointDescriptionFloat*>(&pointDescription));
}

// RoundedRectFloat
D2D1_ROUNDED_RECT NativeConversions::ToNative(const RoundedRectFloat& roundedRect)
{
    RoundedRectFloat& roundedRect2 = *const_cast<RoundedRectFloat*>(&roundedRect);
    D2D1_ROUNDED_RECT d2dRoundedRect;
    d2dRoundedRect.rect = ToNative(roundedRect2.Rect);
    d2dRoundedRect.radiusX = roundedRect2.RadiusX;
    d2dRoundedRect.radiusY = roundedRect2.RadiusY;
    return d2dRoundedRect;
}

RoundedRectFloat NativeConversions::FromNative(const D2D1_ROUNDED_RECT& d2dRoundedRect)
{
    return RoundedRectFloat(FromNative(d2dRoundedRect.rect), d2dRoundedRect.radiusX, d2dRoundedRect.radiusY);
}

// ArcFloat
D2D1_ARC_SEGMENT NativeConversions::ToNative(const ArcFloat& arc)
{
    return *(reinterpret_cast<const D2D1_ARC_SEGMENT*>(&arc));
}

ArcFloat NativeConversions::FromNative(const D2D1_ARC_SEGMENT& arc)
{
    return *(reinterpret_cast<const ArcFloat*>(&arc));
}

// BezierFloat
D2D1_BEZIER_SEGMENT NativeConversions::ToNative(const BezierFloat& bezier)
{
    return *(reinterpret_cast<const D2D1_BEZIER_SEGMENT*>(&bezier));
}

BezierFloat NativeConversions::FromNative(const D2D1_BEZIER_SEGMENT& bezier)
{
    return *(reinterpret_cast<const BezierFloat*>(&bezier));
}

// QuadraticBezierFloat
D2D1_QUADRATIC_BEZIER_SEGMENT NativeConversions::ToNative(const QuadraticBezierFloat& bezier)
{
    return *(reinterpret_cast<const D2D1_QUADRATIC_BEZIER_SEGMENT*>(&bezier));
}

QuadraticBezierFloat NativeConversions::FromNative(const D2D1_QUADRATIC_BEZIER_SEGMENT& bezier)
{
    return *(reinterpret_cast<const QuadraticBezierFloat*>(&bezier));
}

// Tag
D2D1_TAG NativeConversions::ToNative(const PaintDotNet::Direct2D::Tag& tag)
{
    return *(reinterpret_cast<const D2D1_TAG*>(&tag));
}

Tag NativeConversions::FromNative(const D2D1_TAG& d2dTag)
{
    return *(reinterpret_cast<const Tag*>(&d2dTag));
}

// FontMetrics
FontMetrics NativeConversions::FromNative(const DWRITE_FONT_METRICS& metrics)
{
    return *(reinterpret_cast<const FontMetrics*>(&metrics));
}

// TextMetrics
TextMetrics NativeConversions::FromNative(const DWRITE_TEXT_METRICS& metrics)
{
    return *(reinterpret_cast<const TextMetrics*>(&metrics));
}

// InlineObjectMetrics
InlineObjectMetrics NativeConversions::FromNative(const DWRITE_INLINE_OBJECT_METRICS& metrics)
{
    return *(reinterpret_cast<const InlineObjectMetrics*>(&metrics));
}

DWRITE_INLINE_OBJECT_METRICS NativeConversions::ToNative(const InlineObjectMetrics& metrics)
{
    return *(reinterpret_cast<const DWRITE_INLINE_OBJECT_METRICS*>(&metrics));
}

// OverhangMetrics
OverhangMetrics NativeConversions::FromNative(const DWRITE_OVERHANG_METRICS& metrics)
{
    return *(reinterpret_cast<const OverhangMetrics*>(&metrics));
}

DWRITE_OVERHANG_METRICS NativeConversions::ToNative(const OverhangMetrics& metrics)
{
    return *(reinterpret_cast<const DWRITE_OVERHANG_METRICS*>(&metrics));
}

// TrimmingParameters
TrimmingParameters NativeConversions::FromNative(const DWRITE_TRIMMING& trimming)
{
    return *(reinterpret_cast<const TrimmingParameters*>(&trimming));
}

DWRITE_TRIMMING NativeConversions::ToNative(const TrimmingParameters& trimming)
{
    return *(reinterpret_cast<const DWRITE_TRIMMING*>(&trimming));
}

// HitTestMetrics
HitTestMetrics NativeConversions::FromNative(const DWRITE_HIT_TEST_METRICS& hitTestMetrics)
{
    return *(reinterpret_cast<const HitTestMetrics*>(&hitTestMetrics));
}

DWRITE_HIT_TEST_METRICS NativeConversions::ToNative(const HitTestMetrics& hitTestMetrics)
{
    return *(reinterpret_cast<const DWRITE_HIT_TEST_METRICS*>(&hitTestMetrics));
}

// TextRange
TextRange NativeConversions::FromNative(const DWRITE_TEXT_RANGE& textRange)
{
    return *(reinterpret_cast<const TextRange*>(&textRange));
}

DWRITE_TEXT_RANGE NativeConversions::ToNative(const TextRange& textRange)
{
    return *(reinterpret_cast<const DWRITE_TEXT_RANGE*>(&textRange));
}

// FontFeature
FontFeature NativeConversions::FromNative(const DWRITE_FONT_FEATURE& fontFeature)
{
    return *(reinterpret_cast<const FontFeature*>(&fontFeature));
}

DWRITE_FONT_FEATURE NativeConversions::ToNative(const FontFeature& fontFeature)
{
    return *(reinterpret_cast<const DWRITE_FONT_FEATURE*>(&fontFeature));
}

// AnimationSeconds
AnimationSeconds NativeConversions::FromNative(const UI_ANIMATION_SECONDS& seconds)
{
    return AnimationSeconds(seconds);
}

UI_ANIMATION_SECONDS NativeConversions::ToNative(const AnimationSeconds& seconds)
{
    return const_cast<AnimationSeconds*>(&seconds)->Seconds;
}

// AnimationKeyFrame
AnimationKeyFrame NativeConversions::FromNative(const UI_ANIMATION_KEYFRAME& keyFrame)
{
    return *(reinterpret_cast<const AnimationKeyFrame*>(&keyFrame));
}

UI_ANIMATION_KEYFRAME NativeConversions::ToNative(const PaintDotNet::Animation::AnimationKeyFrame& keyFrame)
{
    return *(reinterpret_cast<const UI_ANIMATION_KEYFRAME*>(&keyFrame));
}

// LUID
Int64 NativeConversions::FromNative(const LUID& luid)
{
    return *(reinterpret_cast<const Int64*>(&luid));
}

// AdapterDescription
AdapterDescription NativeConversions::FromNative(const DXGI_ADAPTER_DESC& adapterDesc)
{
    return AdapterDescription(
        gcnew String(&adapterDesc.Description[0]),
        adapterDesc.VendorId,
        adapterDesc.DeviceId,
        adapterDesc.SubSysId,
        adapterDesc.Revision,
        UIntPtr(reinterpret_cast<void*>(adapterDesc.DedicatedVideoMemory)),
        UIntPtr(reinterpret_cast<void*>(adapterDesc.DedicatedSystemMemory)),
        UIntPtr(reinterpret_cast<void*>(adapterDesc.SharedSystemMemory)),
        FromNative(adapterDesc.AdapterLuid));
}

// AdapterDescription1
AdapterDescription1 NativeConversions::FromNative(const DXGI_ADAPTER_DESC1& adapterDesc1)
{
    return AdapterDescription1(
        gcnew String(&adapterDesc1.Description[0]),
        adapterDesc1.VendorId,
        adapterDesc1.DeviceId,
        adapterDesc1.SubSysId,
        adapterDesc1.Revision,
        UIntPtr(reinterpret_cast<void*>(adapterDesc1.DedicatedVideoMemory)),
        UIntPtr(reinterpret_cast<void*>(adapterDesc1.DedicatedSystemMemory)),
        UIntPtr(reinterpret_cast<void*>(adapterDesc1.SharedSystemMemory)),
        FromNative(adapterDesc1.AdapterLuid),
        static_cast<AdapterFlags>(adapterDesc1.Flags));
}

// AdapterDescription2
AdapterDescription2 NativeConversions::FromNative(const DXGI_ADAPTER_DESC2& adapterDesc2)
{
    return AdapterDescription2(
        gcnew String(&adapterDesc2.Description[0]),
        adapterDesc2.VendorId,
        adapterDesc2.DeviceId,
        adapterDesc2.SubSysId,
        adapterDesc2.Revision,
        UIntPtr(reinterpret_cast<void*>(adapterDesc2.DedicatedVideoMemory)),
        UIntPtr(reinterpret_cast<void*>(adapterDesc2.DedicatedSystemMemory)),
        UIntPtr(reinterpret_cast<void*>(adapterDesc2.SharedSystemMemory)),
        FromNative(adapterDesc2.AdapterLuid),
        static_cast<AdapterFlags>(adapterDesc2.Flags),
        static_cast<GraphicsPreemptionGranularity>(adapterDesc2.GraphicsPreemptionGranularity),
        static_cast<ComputePreemptionGranularity>(adapterDesc2.ComputePreemptionGranularity));
}

// AdapterDescription3
AdapterDescription3 NativeConversions::FromNative(const DXGI_ADAPTER_DESC3& adapterDesc3)
{
    return AdapterDescription3(
        gcnew String(&adapterDesc3.Description[0]),
        adapterDesc3.VendorId,
        adapterDesc3.DeviceId,
        adapterDesc3.SubSysId,
        adapterDesc3.Revision,
        UIntPtr(reinterpret_cast<void*>(adapterDesc3.DedicatedVideoMemory)),
        UIntPtr(reinterpret_cast<void*>(adapterDesc3.DedicatedSystemMemory)),
        UIntPtr(reinterpret_cast<void*>(adapterDesc3.SharedSystemMemory)),
        FromNative(adapterDesc3.AdapterLuid),
        static_cast<AdapterFlags3>(adapterDesc3.Flags),
        static_cast<GraphicsPreemptionGranularity>(adapterDesc3.GraphicsPreemptionGranularity),
        static_cast<ComputePreemptionGranularity>(adapterDesc3.ComputePreemptionGranularity));
}

// OutputDescription
OutputDescription NativeConversions::FromNative(const DXGI_OUTPUT_DESC& outputDesc)
{
    return OutputDescription(
        gcnew String(&outputDesc.DeviceName[0]),
        outputDesc.DesktopCoordinates.left,
        outputDesc.DesktopCoordinates.top,
        outputDesc.DesktopCoordinates.right,
        outputDesc.DesktopCoordinates.bottom,
        outputDesc.AttachedToDesktop ? true : false,
        static_cast<RotationMode>(outputDesc.Rotation),
        IntPtr(reinterpret_cast<void*>(outputDesc.Monitor)));
}

// BitmapPattern
BitmapPattern NativeConversions::FromNative(const WICBitmapPattern& bitmapPattern)
{
    throw gcnew NotImplementedException();
}

// Decimal
Decimal NativeConversions::FromNative(const DECIMAL& decimal)
{
    return *(reinterpret_cast<const Decimal*>(&decimal));
}

DECIMAL NativeConversions::ToNative(const Decimal& decimal)
{
    return *(reinterpret_cast<const DECIMAL*>(&decimal));
}

// VARIANT
Object^ NativeConversions::FromVARIANT(const VARIANT& variant)
{
    return FromPROPVARIANT(*(reinterpret_cast<const PROPVARIANT*>(&variant)));
}

VARIANT NativeConversions::ToVARIANT(System::Object^ value)
{
    PROPVARIANT propVariant = ToPROPVARIANT(value);
    return *(reinterpret_cast<VARIANT*>(&propVariant));
}

// PROPVARIANT
static String^ PtrToStringUni(const wchar_t* pwsz)
{
    return Marshal::PtrToStringUni(IntPtr(reinterpret_cast<void*>(const_cast<wchar_t*>(pwsz))));
}

static String^ PtrToStringAnsi(const char* psz)
{
    return Marshal::PtrToStringAnsi(IntPtr(reinterpret_cast<void*>(const_cast<char*>(psz))));
}

static String^ PtrToStringBSTR(const BSTR bstr)
{
    return Marshal::PtrToStringBSTR(IntPtr(reinterpret_cast<void*>(const_cast<BSTR>(bstr))));
}

static Decimal ConvertCYToDecimal(const CY cy)
{
    return Decimal::FromOACurrency(cy.int64);
}

Object^ NativeConversions::FromPROPVARIANT(const PROPVARIANT& propVariant)
{
    throw gcnew NotImplementedException();
}

PROPVARIANT NativeConversions::ToPROPVARIANT(Object^ value)
{
    throw gcnew NotImplementedException();
}
