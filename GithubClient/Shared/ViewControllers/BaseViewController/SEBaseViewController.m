//
//  SEBaseViewController.m
//  GithubClient
//
//  Created by Evseev Sergey on 04/04/15.
//  Copyright (c) 2015 Sergey Evseev. All rights reserved.
//

#import "SEBaseViewController.h"

@interface SEBaseViewController () {
    
}

@end

@implementation SEBaseViewController

- (instancetype)initWithCoder:(NSCoder *)aDecoder {
    
    if (self = [super initWithCoder:aDecoder]) {
        
    }
    return self;
    
}

- (void)setupLocator:(id <SEServiceLocatorProtocol>)locator {
    
    _serviceLocator = locator;
    
}

@end
