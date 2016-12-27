/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct RefPtr<WebCore::LegacyWebArchive> {
	LegacyWebArchive m_ptr;
} RefPtr<WebCore::LegacyWebArchive>;

typedef struct _NSZone* NSZoneRef;

typedef struct RefPtr<WTF::StringImpl> {
	StringImpl m_ptr;
} RefPtr<WTF::StringImpl>;

typedef struct String {
	RefPtr<WTF::StringImpl> m_impl;
} String;

typedef struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16> {
	MimeClassInfo m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16>;

typedef struct PluginInfo {
	String name;
	String file;
	String desc;
	Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16> mimes;
	BOOL isApplicationPlugin;
	unsigned char clientLoadPolicy;
} PluginInfo;

typedef struct RetainPtr<__CFBundle *> {
	void m_ptr;
} RetainPtr<__CFBundle *>;

typedef struct CGImage* CGImageRef;

typedef struct RefPtr<WebCore::DeviceOrientationData> {
	DeviceOrientationData m_ptr;
} RefPtr<WebCore::DeviceOrientationData>;

typedef struct _compressed_pair<WebCore::DeviceOrientationClientMock *, std::__1::default_delete<WebCore::DeviceOrientationClientMock> > {
	DeviceOrientationClientMock __first_;
} compressed_pair<WebCore::DeviceOrientationClientMock *, std::__1::default_delete<WebCore::DeviceOrientationClientMock> >;

typedef struct unique_ptr<WebCore::DeviceOrientationClientMock, std::__1::default_delete<WebCore::DeviceOrientationClientMock> > {
	compressed_pair<WebCore::DeviceOrientationClientMock *, std::__1::default_delete<WebCore::DeviceOrientationClientMock> > __ptr_;
} unique_ptr<WebCore::DeviceOrientationClientMock, std::__1::default_delete<WebCore::DeviceOrientationClientMock> >;

typedef struct DeviceOrientationController* DeviceOrientationControllerRef;

typedef struct RefPtr<WebCore::UndoStep> {
	UndoStep m_ptr;
} RefPtr<WebCore::UndoStep>;

typedef struct _compressed_pair<WebScriptDebugger *, std::__1::default_delete<WebScriptDebugger> > {
	WebScriptDebugger __first_;
} compressed_pair<WebScriptDebugger *, std::__1::default_delete<WebScriptDebugger> >;

typedef struct unique_ptr<WebScriptDebugger, std::__1::default_delete<WebScriptDebugger> > {
	compressed_pair<WebScriptDebugger *, std::__1::default_delete<WebScriptDebugger> > __ptr_;
} unique_ptr<WebScriptDebugger, std::__1::default_delete<WebScriptDebugger> >;

typedef struct RetainPtr<NSString> {
	void m_ptr;
} RetainPtr<NSString>;

typedef struct __SecTrust* SecTrustRef;

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct CGContext* CGContextRef;

typedef struct CGColor* CGColorRef;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct __CTFont* CTFontRef;

typedef struct RefPtr<WebCore::Frame> {
	Frame m_ptr;
} RefPtr<WebCore::Frame>;

typedef struct type {
	unsigned char __lx[24];
} type;

typedef struct function<void (WebCore::PolicyAction)> {
	type __buf_;
	__base<void (WebCore::PolicyAction)> __f_;
} function<void (WebCore::PolicyAction)>;

typedef struct RetainPtr<NSURL> {
	void m_ptr;
} RetainPtr<NSURL>;

typedef struct RefPtr<WebCore::Geolocation> {
	Geolocation m_ptr;
} RefPtr<WebCore::Geolocation>;

typedef struct RetainPtr<WebView *> {
	void m_ptr;
} RetainPtr<WebView *>;

typedef struct RetainPtr<CLLocationManager> {
	void m_ptr;
} RetainPtr<CLLocationManager>;

typedef struct RefPtr<WebCore::GeolocationPosition> {
	GeolocationPosition m_ptr;
} RefPtr<WebCore::GeolocationPosition>;

typedef struct RetainPtr<WebGeolocationCoreLocationProvider> {
	void m_ptr;
} RetainPtr<WebGeolocationCoreLocationProvider>;

typedef struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> {
	void m_ptr;
} RetainPtr<_WebCoreLocationUpdateThreadingProxy>;

typedef struct HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView> > > {
	KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > m_table;
	unsigned m_tableSize;
	unsigned m_tableSizeMask;
	unsigned m_keyCount;
	unsigned m_deletedCount;
} HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView> > >;

typedef struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > > {
	HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView> > > m_impl;
} HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >;

typedef struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > {
	id m_table;
	unsigned m_tableSize;
	unsigned m_tableSizeMask;
	unsigned m_keyCount;
	unsigned m_deletedCount;
} HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >;

typedef struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > {
	HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > m_impl;
} HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >;

typedef struct RetainPtr<NSTimer> {
	void m_ptr;
} RetainPtr<NSTimer>;

typedef struct RetainPtr<WebGeolocationPosition> {
	void m_ptr;
} RetainPtr<WebGeolocationPosition>;

typedef struct _compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > *, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > > {
	HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > __first_;
} compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > *, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > >;

typedef struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > > {
	compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > *, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > > __ptr_;
} unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > >;

typedef struct RefPtr<WebCore::HistoryItem> {
	HistoryItem m_ptr;
} RefPtr<WebCore::HistoryItem>;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct RetainPtr<WebNotificationPrivate> {
	void m_ptr;
} RetainPtr<WebNotificationPrivate>;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	int payload;
	int tag;
} SCD_Struct_We46;

typedef struct JSValue {
	EncodedValueDescriptor u;
	long long asInt64;
	JSCell ptr;
	SCD_Struct_We46) asBits;
} JSValue;

typedef struct RefPtr<WebCore::DOMWrapperWorld> {
	DOMWrapperWorld m_ptr;
} RefPtr<WebCore::DOMWrapperWorld>;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> > {
	TextIterator __first_;
} compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> >;

typedef struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> > {
	compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> > __ptr_;
} unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> >;

typedef struct Vector<unsigned short, 0, WTF::CrashOnOverflow, 16> {
	unsigned short m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<unsigned short, 0, WTF::CrashOnOverflow, 16>;

typedef struct __CFString* CFStringRef;

typedef struct UserContentURLPattern {
	BOOL m_invalid;
	String m_scheme;
	String m_host;
	String m_path;
	BOOL m_matchSubdomains;
} UserContentURLPattern;

typedef struct {
	unsigned field1[8];
} SCD_Struct_We55;

typedef struct Page* PageRef;

typedef struct RefPtr<WebViewGroup> {
	WebViewGroup m_ptr;
} RefPtr<WebViewGroup>;

typedef struct WebResourceDelegateImplementationCache {
	/*function pointer*/void* didReceiveAuthenticationChallengeFunc;
	/*function pointer*/void* canAuthenticateAgainstProtectionSpaceFunc;
	/*function pointer*/void* connectionPropertiesFunc;
	/*function pointer*/void* webThreadDidFinishLoadingFromDataSourceFunc;
	/*function pointer*/void* webThreadDidFailLoadingWithErrorFromDataSourceFunc;
	/*function pointer*/void* webThreadIdentifierForRequestFunc;
	/*function pointer*/void* webThreadDidLoadResourceFromMemoryCacheFunc;
	/*function pointer*/void* webThreadWillSendRequestFunc;
	/*function pointer*/void* webThreadDidReceiveResponseFunc;
	/*function pointer*/void* webThreadDidReceiveContentLengthFunc;
	/*function pointer*/void* webThreadWillCacheResponseFunc;
	/*function pointer*/void* identifierForRequestFunc;
	/*function pointer*/void* willSendRequestFunc;
	/*function pointer*/void* didReceiveResponseFunc;
	/*function pointer*/void* didReceiveContentLengthFunc;
	/*function pointer*/void* didFinishLoadingFromDataSourceFunc;
	/*function pointer*/void* didFailLoadingWithErrorFromDataSourceFunc;
	/*function pointer*/void* didLoadResourceFromMemoryCacheFunc;
	/*function pointer*/void* willCacheResponseFunc;
	/*function pointer*/void* plugInFailedWithErrorFunc;
	/*function pointer*/void* shouldUseCredentialStorageFunc;
	/*function pointer*/void* shouldPaintBrokenImageForURLFunc;
} WebResourceDelegateImplementationCache;

typedef struct WebFrameLoadDelegateImplementationCache {
	/*function pointer*/void* didCreateJavaScriptContextForFrameFunc;
	/*function pointer*/void* didClearWindowObjectForFrameFunc;
	/*function pointer*/void* didClearWindowObjectForFrameInScriptWorldFunc;
	/*function pointer*/void* didClearInspectorWindowObjectForFrameFunc;
	/*function pointer*/void* windowScriptObjectAvailableFunc;
	/*function pointer*/void* didHandleOnloadEventsForFrameFunc;
	/*function pointer*/void* didReceiveServerRedirectForProvisionalLoadForFrameFunc;
	/*function pointer*/void* didCancelClientRedirectForFrameFunc;
	/*function pointer*/void* willPerformClientRedirectToURLDelayFireDateForFrameFunc;
	/*function pointer*/void* didChangeLocationWithinPageForFrameFunc;
	/*function pointer*/void* didPushStateWithinPageForFrameFunc;
	/*function pointer*/void* didReplaceStateWithinPageForFrameFunc;
	/*function pointer*/void* didPopStateWithinPageForFrameFunc;
	/*function pointer*/void* willCloseFrameFunc;
	/*function pointer*/void* didStartProvisionalLoadForFrameFunc;
	/*function pointer*/void* didReceiveTitleForFrameFunc;
	/*function pointer*/void* didCommitLoadForFrameFunc;
	/*function pointer*/void* didFailProvisionalLoadWithErrorForFrameFunc;
	/*function pointer*/void* didFailLoadWithErrorForFrameFunc;
	/*function pointer*/void* didFinishLoadForFrameFunc;
	/*function pointer*/void* didFirstLayoutInFrameFunc;
	/*function pointer*/void* didFirstVisuallyNonEmptyLayoutInFrameFunc;
	/*function pointer*/void* didLayoutFunc;
	/*function pointer*/void* didReceiveIconForFrameFunc;
	/*function pointer*/void* didFinishDocumentLoadForFrameFunc;
	/*function pointer*/void* didDisplayInsecureContentFunc;
	/*function pointer*/void* didRunInsecureContentFunc;
	/*function pointer*/void* didDetectXSSFunc;
	/*function pointer*/void* didRemoveFrameFromHierarchyFunc;
	/*function pointer*/void* webThreadDidLayoutFunc;
} WebFrameLoadDelegateImplementationCache;

typedef struct WebScriptDebugDelegateImplementationCache {
	BOOL didParseSourceExpectsBaseLineNumber;
	BOOL exceptionWasRaisedExpectsHasHandlerFlag;
	/*function pointer*/void* didParseSourceFunc;
	/*function pointer*/void* failedToParseSourceFunc;
	/*function pointer*/void* exceptionWasRaisedFunc;
} WebScriptDebugDelegateImplementationCache;

typedef struct WebHistoryDelegateImplementationCache {
	/*function pointer*/void* navigatedFunc;
	/*function pointer*/void* clientRedirectFunc;
	/*function pointer*/void* serverRedirectFunc;
	/*function pointer*/void* deprecatedSetTitleFunc;
	/*function pointer*/void* setTitleFunc;
	/*function pointer*/void* populateVisitedLinksFunc;
} WebHistoryDelegateImplementationCache;

typedef struct atomic<unsigned char> {
	AC __a_;
} atomic<unsigned char>;

typedef struct Atomic<unsigned char> {
	atomic<unsigned char> value;
} Atomic<unsigned char>;

typedef struct Lock {
	Atomic<unsigned char> m_byte;
} Lock;

typedef struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> > {
	KeyValuePair<unsigned long, WTF::RetainPtr<id> > m_table;
	unsigned m_tableSize;
	unsigned m_tableSizeMask;
	unsigned m_keyCount;
	unsigned m_deletedCount;
} HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> >;

typedef struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > > {
	HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> > m_impl;
} HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > >;

typedef struct RefPtr<LayerFlushController> {
	LayerFlushController m_ptr;
} RefPtr<LayerFlushController>;

typedef struct RetainPtr<NSData> {
	void m_ptr;
} RetainPtr<NSData>;

typedef struct WebObjectInternal* WebObjectInternalRef;

