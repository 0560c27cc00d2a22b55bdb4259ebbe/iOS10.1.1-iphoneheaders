/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSURL, NSDictionary, NSDate;

@interface PEXConnectionsLocation : NSObject {

	BOOL _shouldAggregate;
	NSString* _name;
	NSString* _label;
	NSString* _value;
	NSString* _shortValue;
	NSString* _originatingBundleID;
	NSString* _fullFormattedAddress;
	NSString* _thoroughfare;
	NSString* _subThoroughfare;
	NSString* _locality;
	NSString* _administrativeArea;
	NSString* _postalCode;
	NSString* _country;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSURL* _mapItemURL;
	NSURL* _originatingWebsiteURL;
	NSDictionary* _addressComponents;
	NSString* _source;
	NSString* _trigger;
	NSDate* _createdAt;
	NSNumber* _lifetime;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * shortValue;                         //@synthesize shortValue=_shortValue - In the implementation block
@property (nonatomic,copy) NSString * originatingBundleID;                //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (nonatomic,copy) NSString * fullFormattedAddress;               //@synthesize fullFormattedAddress=_fullFormattedAddress - In the implementation block
@property (nonatomic,copy) NSString * thoroughfare;                       //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,copy) NSString * subThoroughfare;                    //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,copy) NSString * locality;                           //@synthesize locality=_locality - In the implementation block
@property (nonatomic,copy) NSString * administrativeArea;                 //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSNumber * latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL shouldAggregate;                        //@synthesize shouldAggregate=_shouldAggregate - In the implementation block
@property (nonatomic,copy) NSURL * mapItemURL;                            //@synthesize mapItemURL=_mapItemURL - In the implementation block
@property (nonatomic,copy) NSURL * originatingWebsiteURL;                 //@synthesize originatingWebsiteURL=_originatingWebsiteURL - In the implementation block
@property (nonatomic,copy) NSDictionary * addressComponents;              //@synthesize addressComponents=_addressComponents - In the implementation block
@property (nonatomic,copy) NSString * source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * trigger;                            //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,copy) NSDate * createdAt;                            //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy) NSNumber * lifetime;                           //@synthesize lifetime=_lifetime - In the implementation block
+(unsigned long long)round:(double)arg1 toNearest:(double)arg2 ;
-(NSDictionary *)addressComponents;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)trigger;
-(NSString *)source;
-(void)setTrigger:(NSString *)arg1 ;
-(id)addressDictionary;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)administrativeArea;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(NSString *)locality;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)thoroughfare;
-(void)setThoroughfare:(NSString *)arg1 ;
-(NSString *)subThoroughfare;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(BOOL)shouldAggregate;
-(NSString *)originatingBundleID;
-(void)setOriginatingBundleID:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)postalCode;
-(NSString *)shortValue;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(NSString *)fullFormattedAddress;
-(NSURL *)originatingWebsiteURL;
-(NSURL *)mapItemURL;
-(void)setLifetime:(NSNumber *)arg1 ;
-(NSNumber *)lifetime;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(NSDate *)createdAt;
-(void)setShortValue:(NSString *)arg1 ;
-(id)decLocationItem;
-(void)setFullFormattedAddress:(NSString *)arg1 ;
-(void)setShouldAggregate:(BOOL)arg1 ;
-(void)setMapItemURL:(NSURL *)arg1 ;
-(void)setOriginatingWebsiteURL:(NSURL *)arg1 ;
-(void)setAddressComponents:(NSDictionary *)arg1 ;
@end

