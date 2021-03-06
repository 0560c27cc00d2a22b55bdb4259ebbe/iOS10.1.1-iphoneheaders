/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, HAPAccessoryServerDelegate, HAPAccessoryServerForBridgeDelegate, HAPKeyStore;
@class NSString, NSNumber, HAPAccessory, NSArray, NSHashTable, NSObject;

@interface HAPAccessoryServer : NSObject {

	NSString* _name;
	NSString* _identifier;
	BOOL _hasPairings;
	BOOL _reachable;
	BOOL _securitySessionOpen;
	BOOL _incompatibleUpdate;
	NSNumber* _category;
	HAPAccessory* _primaryAccessory;
	NSArray* _accessories;
	NSArray* _associatedAccessories;
	NSArray* _discoveredAccessories;
	NSHashTable* _internalDelegates;
	NSObject*<OS_dispatch_queue> _internalDelegateQueue;
	id<HAPAccessoryServerDelegate> _delegate;
	id<HAPAccessoryServerForBridgeDelegate> _bridgeDelegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	id<HAPKeyStore> _keyStore;
	NSString* _pairSetupPassword;
	NSString* _homeName;

}

@property (nonatomic,readonly) NSHashTable * internalDelegates;                                 //@synthesize internalDelegates=_internalDelegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalDelegateQueue;              //@synthesize internalDelegateQueue=_internalDelegateQueue - In the implementation block
@property (__weak,readonly) id<HAPAccessoryServerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<HAPAccessoryServerForBridgeDelegate> bridgeDelegate;                      //@synthesize bridgeDelegate=_bridgeDelegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (assign,nonatomic) BOOL hasPairings;                                                  //@synthesize hasPairings=_hasPairings - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                 //@synthesize reachable=_reachable - In the implementation block
@property (getter=isSecuritySessionOpen) BOOL securitySessionOpen;                              //@synthesize securitySessionOpen=_securitySessionOpen - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSNumber * category;                                                 //@synthesize category=_category - In the implementation block
@property (assign,getter=isIncompatibleUpdate,nonatomic) BOOL incompatibleUpdate;               //@synthesize incompatibleUpdate=_incompatibleUpdate - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessory;                                   //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (nonatomic,copy) NSArray * accessories;                                               //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,copy) NSArray * associatedAccessories;                                     //@synthesize associatedAccessories=_associatedAccessories - In the implementation block
@property (nonatomic,copy) NSArray * discoveredAccessories;                                     //@synthesize discoveredAccessories=_discoveredAccessories - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPKeyStore> keyStore;                                 //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,copy) NSString * pairSetupPassword;                                        //@synthesize pairSetupPassword=_pairSetupPassword - In the implementation block
@property (nonatomic,copy) NSString * homeName;                                                 //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,readonly) long long linkType; 
+(BOOL)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2 ;
-(id)init;
-(id<HAPAccessoryServerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSNumber *)arg1 ;
-(NSNumber *)category;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setHasPairings:(BOOL)arg1 ;
-(void)setSecuritySessionOpen:(BOOL)arg1 ;
-(id<HAPAccessoryServerForBridgeDelegate>)bridgeDelegate;
-(void)enumerateInternalDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)setAssociatedAccessories:(NSArray *)arg1 ;
-(void)addInternalDelegate:(id)arg1 ;
-(BOOL)isIncompatibleUpdate;
-(void)notifyDelegateUpdatedHasPairings:(BOOL)arg1 ;
-(void)notifyDelegateUpdatedName:(id)arg1 ;
-(void)notifyDelegateUpdatedCategory:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalDelegateQueue;
-(NSHashTable *)internalDelegates;
-(void)removeInternalDelegate:(id)arg1 ;
-(void)setBridgeDelegate:(id<HAPAccessoryServerForBridgeDelegate>)arg1 ;
-(void)setIncompatibleUpdate:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)homeName;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(long long)linkType;
-(NSArray *)accessories;
-(BOOL)isReachable;
-(void)setAccessories:(NSArray *)arg1 ;
-(NSArray *)discoveredAccessories;
-(BOOL)isPaired;
-(HAPAccessory *)primaryAccessory;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)isSecuritySessionOpen;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDiscoveredAccessories:(NSArray *)arg1 ;
-(id<HAPKeyStore>)keyStore;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)associatedAccessories;
-(void)setTheBridgeDelegate:(id)arg1 ;
-(id)initWithKeystore:(id)arg1 ;
-(void)setPrimaryAccessory:(HAPAccessory *)arg1 ;
-(void)discoverAccessories;
-(void)startPairing;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 ;
-(void)setPairSetupPassword:(NSString *)arg1 ;
-(void)setHomeName:(NSString *)arg1 ;
-(BOOL)hasPairings;
-(NSString *)pairSetupPassword;
@end

