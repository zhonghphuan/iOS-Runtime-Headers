/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class MobileCalDAVAccount, NSURL;

@interface MobileCalUserAddress : NSObject {
    MobileCalDAVAccount *_account;
    NSURL *_address;
}

+ (id)userAddress:(id)arg1 forAccount:(id)arg2;
+ (id)userAddressFromDictionaryRepresentation:(id)arg1 forAccount:(id)arg2;

- (void)_setAddress:(id)arg1;
- (id)account;
- (id)address;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithAddress:(id)arg1 account:(id)arg2;
- (void)setAccount:(id)arg1;

@end