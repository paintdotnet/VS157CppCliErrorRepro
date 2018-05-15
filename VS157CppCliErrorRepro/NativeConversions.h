#pragma once

ref class NativeConversions abstract sealed
{
public:
    // Guid
    static GUID ToNative(const System::Guid& guid);

    static System::Guid FromNative(const GUID& guid);

    // FILETIME
    static ::FILETIME ToNative(const System::Runtime::InteropServices::ComTypes::FILETIME& fileTime);

    static System::Runtime::InteropServices::ComTypes::FILETIME FromNative(const ::FILETIME& fileTime);

    // SurfaceDescription
    static PaintDotNet::Dxgi::SurfaceDescription FromNative(const DXGI_SURFACE_DESC& dxgiSurfaceDesc);

    static DXGI_SURFACE_DESC ToNative(const PaintDotNet::Dxgi::SurfaceDescription& surfaceDescription);

    // SharedResource
    static DXGI_SHARED_RESOURCE ToNative(const PaintDotNet::Dxgi::SharedResource& sharedResource);

    // RenderTargetProperties
    static D2D1_RENDER_TARGET_PROPERTIES ToNative(const PaintDotNet::Direct2D::RenderTargetProperties& renderTargetProperties);

    // HwndRenderTargetProperties
    static D2D1_HWND_RENDER_TARGET_PROPERTIES ToNative(const PaintDotNet::Direct2D::HwndRenderTargetProperties& hwndRenderTargetProperties);

    // DrawingStateDescription
    static D2D1_DRAWING_STATE_DESCRIPTION ToNative(const PaintDotNet::Direct2D::DrawingStateDescription& drawingStateDescription);

    static PaintDotNet::Direct2D::DrawingStateDescription FromNative(const D2D1_DRAWING_STATE_DESCRIPTION& drawingStateDescription);

    // DrawingStateDescription1
    static D2D1_DRAWING_STATE_DESCRIPTION1 ToNative(const PaintDotNet::Direct2D::DrawingStateDescription1& drawingStateDescription);

    static PaintDotNet::Direct2D::DrawingStateDescription1 FromNative(const D2D1_DRAWING_STATE_DESCRIPTION1& drawingStateDescription);

    // FactoryOptions
    static D2D1_FACTORY_OPTIONS ToNative(const PaintDotNet::Direct2D::Direct2DFactoryOptions& factoryOptions);

    // BrushProperties
    static D2D1_BRUSH_PROPERTIES ToNative(const PaintDotNet::Direct2D::BrushProperties& brushProperties);

    // DeviceBitmapBrushProperties
    static D2D1_BITMAP_BRUSH_PROPERTIES ToNative(const PaintDotNet::Direct2D::DeviceBitmapBrushProperties& deviceBitmapBrushProperties);

    static D2D1_BITMAP_BRUSH_PROPERTIES1 ToNative1(const PaintDotNet::Direct2D::DeviceBitmapBrushProperties& deviceBitmapBrushProperties);

    // DeviceBitmapProperties
    static D2D1_BITMAP_PROPERTIES ToNative(const PaintDotNet::Direct2D::DeviceBitmapProperties& deviceBitmapProperties);

    // DeviceBitmapProperties1
    static HRESULT ToNative(
        PaintDotNet::Direct2D::DeviceBitmapProperties1& deviceBitmapProperties,
        D2D1_BITMAP_PROPERTIES1* pBitmapProperties,
        ID2D1ColorContext** ppColorContext);

    // DeviceImageBrushProperties
    static D2D1_IMAGE_BRUSH_PROPERTIES ToNative(const PaintDotNet::Direct2D::DeviceImageBrushProperties& deviceImageBrushProperties);

    // UnsafeMappedRect
    static PaintDotNet::Rendering::UnsafeMappedRect FromNative(const D2D1_MAPPED_RECT& mappedRect);

    static PaintDotNet::Rendering::UnsafeMappedRect FromNative(const DXGI_MAPPED_RECT& mappedRect);

    // LinearGradientBrushProperties
    static D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES ToNative(const PaintDotNet::Direct2D::LinearGradientBrushProperties& linearGradientBrushProperties);

    // RadialGradientBrushProperties
    static D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES ToNative(const PaintDotNet::Direct2D::RadialGradientBrushProperties& radialGradientBrushProperties);

    // StrokeStyleProperties
    static D2D1_STROKE_STYLE_PROPERTIES ToNative(const PaintDotNet::Direct2D::StrokeStyleProperties& strokeStyleProperties);

    // StrokeStyleProperties1
    static D2D1_STROKE_STYLE_PROPERTIES1 ToNative(const PaintDotNet::Direct2D::StrokeStyleProperties1& strokeStyleProperties);

    // TransformedVirtualDeviceImageProperties
    static D2D1_TRANSFORMED_IMAGE_SOURCE_PROPERTIES ToNative(const PaintDotNet::Direct2D::TransformedVirtualDeviceImageProperties& properties);

    static PaintDotNet::Direct2D::TransformedVirtualDeviceImageProperties FromNative(const D2D1_TRANSFORMED_IMAGE_SOURCE_PROPERTIES& properties);

    // Direct2DPixelFormat
    static D2D1_PIXEL_FORMAT ToNative(const PaintDotNet::Direct2D::Direct2DPixelFormat& pixelFormat);

    static PaintDotNet::Direct2D::Direct2DPixelFormat FromNative(const D2D1_PIXEL_FORMAT& d2dPixelFormat);

    // ColorRgba128Float
    static D2D1_COLOR_F ToNative(const PaintDotNet::Imaging::ColorRgba128Float& colorF);

    static PaintDotNet::Imaging::ColorRgba128Float FromNative(const D2D1_COLOR_F& colorF);

    // PointInt32
    static D2D1_POINT_2U ToNative(const PaintDotNet::Rendering::PointInt32& point);

    static PaintDotNet::Rendering::PointInt32 FromNative(const D2D1_POINT_2U& point);

    // PointFloat
    static D2D1_POINT_2F ToNative(const PaintDotNet::Rendering::PointFloat& pointF);

    static PaintDotNet::Rendering::PointFloat FromNative(const D2D1_POINT_2F& d2dPointF);

    // SizeFloat
    static D2D1_SIZE_F ToNative(const PaintDotNet::Rendering::SizeFloat& sizeF);

    static PaintDotNet::Rendering::SizeFloat FromNative(const D2D1_SIZE_F& d2dSizeF);

    // SizeInt32
    static D2D1_SIZE_U ToNative(const PaintDotNet::Rendering::SizeInt32& size);

    static PaintDotNet::Rendering::SizeInt32 FromNative(const D2D1_SIZE_U& d2dSizeU);

    static PaintDotNet::Rendering::SizeInt32 FromNative(const SIZE& win32Size);

    // RectInt32
    static D2D1_RECT_U ToNative(const PaintDotNet::Rendering::RectInt32& rect); // TODO: rename ToNativeD2D ?

    static RECT ToWin32Rect(const D2D1_RECT_U& rect); // TODO: ToNativeWin32

    static RECT ToWin32Rect(const PaintDotNet::Rendering::RectInt32& rect); // TODO: ToNativeWin32

    static WICRect NativeConversions::ToWICRect(const PaintDotNet::Rendering::RectInt32& rect); // TODO: ToNativeWic

    static WICRect NativeConversions::ToWICRect(const D2D1_RECT_U& d2dRect); // TODO: ToNativeWic

    static PaintDotNet::Rendering::RectInt32 FromNative(const D2D1_RECT_U& d2dRect);

    static PaintDotNet::Rendering::RectInt32 FromNative(const RECT& win32Rect);

    static PaintDotNet::Rendering::RectInt32 FromNative(const WICRect& wicRect);

    // RectFloat
    static D2D1_RECT_F ToNative(const PaintDotNet::Rendering::RectFloat& rectF);

    static PaintDotNet::Rendering::RectFloat FromNative(const D2D1_RECT_F& d2dRectF);

    // Matrix3x2Float
    static D2D1_MATRIX_3X2_F NativeConversions::ToNative(const PaintDotNet::Rendering::Matrix3x2Float& matrix);

    static DWRITE_MATRIX NativeConversions::ToNativeDWrite(const PaintDotNet::Rendering::Matrix3x2Float& matrix);

    static PaintDotNet::Rendering::Matrix3x2Float NativeConversions::FromNative(const DWRITE_MATRIX& matrix);

    static PaintDotNet::Rendering::Matrix3x2Float NativeConversions::FromNative(const D2D1_MATRIX_3X2_F& matrix);

    // Matrix4x3Float
    static D2D1_MATRIX_4X3_F NativeConversions::ToNative(const PaintDotNet::Rendering::Matrix4x3Float& matrix);

    static PaintDotNet::Rendering::Matrix4x3Float NativeConversions::FromNative(const D2D1_MATRIX_4X3_F& matrix);

    // Matrix4x4Float
    static D2D1_MATRIX_4X4_F NativeConversions::ToNative(const PaintDotNet::Rendering::Matrix4x4Float& matrix);

    static PaintDotNet::Rendering::Matrix4x4Float NativeConversions::FromNative(const D2D1_MATRIX_4X4_F& matrix);

    // Matrix5x4Float
    static D2D1_MATRIX_5X4_F NativeConversions::ToNative(const PaintDotNet::Rendering::Matrix5x4Float& matrix);

    static PaintDotNet::Rendering::Matrix5x4Float NativeConversions::FromNative(const D2D1_MATRIX_5X4_F& matrix);

    // EllipseFloat
    static D2D1_ELLIPSE ToNative(const PaintDotNet::Rendering::EllipseFloat& ellipse);

    static PaintDotNet::Rendering::EllipseFloat FromNative(const D2D1_ELLIPSE& ellipse);

    // PointDescriptionFloat
    static D2D1_POINT_DESCRIPTION ToNative(const PaintDotNet::Direct2D::PointDescriptionFloat& pointDescription);

    static PaintDotNet::Direct2D::PointDescriptionFloat FromNative(const D2D1_POINT_DESCRIPTION& pointDescription);

    // RoundedRectFloat
    static D2D1_ROUNDED_RECT ToNative(const PaintDotNet::Rendering::RoundedRectFloat& ellipse);

    static PaintDotNet::Rendering::RoundedRectFloat FromNative(const D2D1_ROUNDED_RECT& ellipse);

    // ArcFloat
    static D2D1_ARC_SEGMENT ToNative(const PaintDotNet::Rendering::ArcFloat& arc);

    static PaintDotNet::Rendering::ArcFloat FromNative(const D2D1_ARC_SEGMENT& arc);

    // BezierFloat
    static D2D1_BEZIER_SEGMENT ToNative(const PaintDotNet::Rendering::BezierFloat& bezier);

    static PaintDotNet::Rendering::BezierFloat FromNative(const D2D1_BEZIER_SEGMENT& bezier);

    // QuadraticBezierFloat
    static D2D1_QUADRATIC_BEZIER_SEGMENT ToNative(const PaintDotNet::Rendering::QuadraticBezierFloat& bezier);

    static PaintDotNet::Rendering::QuadraticBezierFloat FromNative(const D2D1_QUADRATIC_BEZIER_SEGMENT& bezier);

    // Tag
    static D2D1_TAG ToNative(const PaintDotNet::Direct2D::Tag& tag);

    static PaintDotNet::Direct2D::Tag FromNative(const D2D1_TAG& d2dTag);

    // FontMetrics
    static PaintDotNet::DirectWrite::FontMetrics FromNative(const DWRITE_FONT_METRICS& metrics);

    // TextMetrics
    static PaintDotNet::DirectWrite::TextMetrics FromNative(const DWRITE_TEXT_METRICS& metrics);

    // InlineObjectMetrics
    static PaintDotNet::DirectWrite::InlineObjectMetrics FromNative(const DWRITE_INLINE_OBJECT_METRICS& metrics);

    static DWRITE_INLINE_OBJECT_METRICS ToNative(const PaintDotNet::DirectWrite::InlineObjectMetrics& metrics);

    // OverhangMetrics
    static PaintDotNet::DirectWrite::OverhangMetrics FromNative(const DWRITE_OVERHANG_METRICS& metrics);

    static DWRITE_OVERHANG_METRICS ToNative(const PaintDotNet::DirectWrite::OverhangMetrics& metrics);

    // Trimming
    static PaintDotNet::DirectWrite::TrimmingParameters FromNative(const DWRITE_TRIMMING& trimming);

    static DWRITE_TRIMMING ToNative(const PaintDotNet::DirectWrite::TrimmingParameters& trimming);

    // HitTestMetrics
    static PaintDotNet::DirectWrite::HitTestMetrics FromNative(const DWRITE_HIT_TEST_METRICS& hitTestMetrics);

    static DWRITE_HIT_TEST_METRICS ToNative(const PaintDotNet::DirectWrite::HitTestMetrics& trimming);

    // TextRange
    static PaintDotNet::DirectWrite::TextRange FromNative(const DWRITE_TEXT_RANGE& textRange);

    static DWRITE_TEXT_RANGE ToNative(const PaintDotNet::DirectWrite::TextRange& textRange);

    // FontFeature
    static PaintDotNet::DirectWrite::FontFeature FromNative(const DWRITE_FONT_FEATURE& fontFeature);

    static DWRITE_FONT_FEATURE ToNative(const PaintDotNet::DirectWrite::FontFeature& fontFeature);

    // AnimationSeconds
    static PaintDotNet::Animation::AnimationSeconds FromNative(const UI_ANIMATION_SECONDS& seconds);

    static UI_ANIMATION_SECONDS ToNative(const PaintDotNet::Animation::AnimationSeconds& seconds);

    // AnimationKeyFrame
    static PaintDotNet::Animation::AnimationKeyFrame FromNative(const UI_ANIMATION_KEYFRAME& keyFrame);

    static UI_ANIMATION_KEYFRAME ToNative(const PaintDotNet::Animation::AnimationKeyFrame& keyFrame);

    // LUID
    static System::Int64 FromNative(const LUID& luid);

    // AdapterDescription
    static PaintDotNet::Dxgi::AdapterDescription FromNative(const DXGI_ADAPTER_DESC& adapterDesc);

    // AdapterDescription1
    static PaintDotNet::Dxgi::AdapterDescription1 FromNative(const DXGI_ADAPTER_DESC1& adapterDesc1);

    // AdapterDescription2
    static PaintDotNet::Dxgi::AdapterDescription2 FromNative(const DXGI_ADAPTER_DESC2& adapterDesc2);

    // AdapterDescription3
    static PaintDotNet::Dxgi::AdapterDescription3 FromNative(const DXGI_ADAPTER_DESC3& adapterDesc3);

    // OutputDescription
    static PaintDotNet::Dxgi::OutputDescription FromNative(const DXGI_OUTPUT_DESC& outputDesc);

    // BitmapPattern
    static PaintDotNet::Imaging::BitmapPattern FromNative(const WICBitmapPattern& bitmapPattern);

    // Decimal
    static System::Decimal FromNative(const DECIMAL& decimal);

    static DECIMAL ToNative(const System::Decimal& decimal);

    // VARIANT
    static System::Object^ FromVARIANT(const VARIANT& variant);

    static VARIANT ToVARIANT(System::Object^ value);

    // PROPVARIANT
    static System::Object^ FromPROPVARIANT(const PROPVARIANT& propVariant);

    static PROPVARIANT ToPROPVARIANT(System::Object^ value);



};
