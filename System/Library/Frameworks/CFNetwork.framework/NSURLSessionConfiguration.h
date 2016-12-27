/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURLCredentialStorage, NSURLCache, NSHTTPCookieStorage, NSDictionary, NSSet, NSArray, NSURL, NSData;

@interface NSURLSessionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (copy) NSString * identifier; 
@property (getter=isBackgroundSession) BOOL backgroundSession; 
@property (assign) NSString * disposition; 
@property (retain) NSURLCredentialStorage * _phskip_credStorage; 
@property (assign) BOOL _phskip_credStorageSet; 
@property (retain) NSURLCache * _phskip_urlCache; 
@property (assign) BOOL _phskip_urlCacheSet; 
@property (retain) NSHTTPCookieStorage * _phskip_cookieStorage; 
@property (assign) BOOL _phskip_cookieStorageSet; 
@property (retain) CFHSTSPolicyRef _phskip_hstsStorage; 
@property (assign) BOOL _phskip_hstsStorageSet; 
@property (assign) long long pipeliningHighWatermark; 
@property (assign) long long pipeliningLowWatermark; 
@property (assign) long long numPriorityLevels; 
@property (assign) long long numFastLanes; 
@property (assign) long long minimumFastLanePriority; 
@property (assign) BOOL skip_download_unlink; 
@property (assign) BOOL _requiresClientToOpenFiles; 
@property (copy) NSString * _tcpConnectionPoolName; 
@property (assign) BOOL _forcesNewConnections; 
@property (copy) NSDictionary * _socketStreamProperties; 
@property (assign) BOOL _supportsAVAssetDownloads; 
@property (getter=_isProxySession) BOOL _proxySession; 
@property (copy) NSSet * _authenticatorStatusCodes; 
@property (assign) BOOL _disallowsSPDY; 
@property (assign) BOOL _preventsIdleSleep; 
@property (assign) BOOL _usePipeliningHeuristics; 
@property (copy) NSArray * _contentDispHeadEncFallback; 
@property (assign) BOOL _shouldPreserveBackgroundSessionDisposition; 
@property (assign) BOOL _disablesOutOfProcessDirectWiFiUsage; 
@property (assign) BOOL _disablesUseOfProxySession; 
@property (copy) NSString * _companionAppBundleIdentifier; 
@property (copy) NSString * _watchAppBundleIdentifier; 
@property (copy) NSString * _watchExtensionBundleIdentifier; 
@property (assign) unsigned long long _forcedNetworkServiceType; 
@property (copy) NSDictionary * _overriddenDelegateOptions; 
@property (assign) BOOL _requiresPowerPluggedIn; 
@property (copy) NSURL * _directoryForDownloadedFiles; 
@property (copy) NSString * _sourceApplicationBundleIdentifier; 
@property (copy) NSString * _sourceApplicationSecondaryIdentifier; 
@property (copy) NSData * _sourceApplicationAuditTokenData; 
@property (assign) unsigned long long _TCPAdaptiveReadTimeout; 
@property (assign) unsigned long long _TCPAdaptiveWriteTimeout; 
@property (assign) BOOL _allowsExpensiveAccess; 
@property (assign) BOOL _allowsPowerNapScheduling; 
@property (assign) BOOL _preventsIdleSleepOnceConnected; 
@property (assign) BOOL _sessionSendsLaunchOnDemandEvents; 
@property (assign) BOOL _collectsTimingData; 
@property (assign) long long _timingDataOptions; 
@property (assign) BOOL _shouldSkipPreferredClientCertificateLookup; 
@property (copy) NSString * _ledBellyServiceIdentifier; 
@property (copy) id<NSURLSessionAppleIDContext> _appleIDContext; 
@property (copy) NSData * _atsContext; 
@property (assign) double _connectionCachePurgeTimeout; 
@property (assign) double _connectionCacheCellPurgeTimeout; 
@property (assign) double _longLivedConnectionCachePurgeTimeout; 
@property (assign) double _longLivedConnectionCacheCellPurgeTimeout; 
@property (assign) BOOL _allowsRetryForBackgroundDataTasks; 
@property (assign) BOOL _onBehalfOfPairedDevice; 
@property (assign) BOOL _respectsAllowsCellularAccessForDiscretionaryTasks; 
@property (assign) BOOL _overridesBackgroundSessionAutoRedirect; 
@property (assign) BOOL _performsEVCertCheck; 
@property (assign) BOOL _infersDiscretionaryFromOriginatingClient; 
@property (copy) NSString * _connectionPoolName; 
@property (assign) BOOL _prefersInfraWiFi; 
@property (assign) BOOL _allowsMultipathTCP; 
@property (assign) BOOL _allowsResponseMonitoringDuringBodyTranmission; 
@property (assign) BOOL _allowsIndefiniteConnections; 
@property (copy) NSString * _CTDataConnectionServiceType; 
@property (assign) BOOL _allowsTCPFastOpen; 
@property (assign) BOOL _allowsTLSSessionTickets; 
@property (assign) BOOL _preventsDirectWiFiAccess; 
@property (assign) BOOL _allowTCPIOConnectionStreamTask; 
@property (assign) unsigned long long requestCachePolicy; 
@property (assign) double timeoutIntervalForRequest; 
@property (assign) double timeoutIntervalForResource; 
@property (assign) unsigned long long networkServiceType; 
@property (assign) BOOL allowsCellularAccess; 
@property (getter=isDiscretionary) BOOL discretionary; 
@property (copy) NSString * sharedContainerIdentifier; 
@property (assign) BOOL sessionSendsLaunchEvents; 
@property (copy) NSDictionary * connectionProxyDictionary; 
@property (assign) int TLSMinimumSupportedProtocol; 
@property (assign) int TLSMaximumSupportedProtocol; 
@property (assign) BOOL HTTPShouldUsePipelining; 
@property (assign) BOOL HTTPShouldSetCookies; 
@property (assign) unsigned long long HTTPCookieAcceptPolicy; 
@property (copy) NSDictionary * HTTPAdditionalHeaders; 
@property (assign) long long HTTPMaximumConnectionsPerHost; 
@property (retain) NSHTTPCookieStorage * HTTPCookieStorage; 
@property (retain) NSURLCredentialStorage * URLCredentialStorage; 
@property (retain) NSURLCache * URLCache; 
@property (assign) BOOL shouldUseExtendedBackgroundIdleMode; 
@property (copy) NSArray * protocolClasses; 
+(id)_defaultProtocolClasses;
+(id)sessionConfigurationForSharedSession;
+(id)_AVBackgroundSessionConfigurationWithIdentifier:(id)arg1 ;
+(id)AVBackgroundSessionConfigurationWithIdentifier:(id)arg1 ;
+(id)_proxySessionConfigurationWithIdentifier:(id)arg1 ;
+(id)backgroundSessionConfiguration:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)ephemeralSessionConfiguration;
+(id)defaultSessionConfiguration;
+(id)backgroundSessionConfigurationWithIdentifier:(id)arg1 ;
-(void)applyNSURLConnectionProperties:(id)arg1 ;
-(HTTPConnectionCacheLimits)getConnectionCacheLimits;
-(CFHSTSPolicyRef)copyHSTSPolicy;
-(void*)_copyAttribute:(CFStringRef)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_copyCFCookieStorage;
-(id)initWithDisposition:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

